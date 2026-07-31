#include <bits/stdc++.h>
using namespace std;
const int MOD=998244353;
const int RAIZ=3;
int potencia(long long base,long long expoente){
    long long resultado=1;
    while(expoente){
        if(expoente&1) resultado=resultado*base%MOD;
        base=base*base%MOD;
        expoente>>=1;
    }
    return resultado;
}
void ntt(vector<int>&a,bool inversa){
    int n=a.size();
    for(int i=1,j=0;i<n;i++){
        int bit=n>>1;
        while(j&bit){
            j^=bit;
            bit>>=1;
        }
        j^=bit;
        if(i<j) swap(a[i],a[j]);
    }
    for(int tamanho=2;tamanho<=n;tamanho<<=1){
        int raiz=potencia(RAIZ,(MOD-1)/tamanho);
        if(inversa) raiz=potencia(raiz,MOD-2);
        for(int inicio=0;inicio<n;inicio+=tamanho){
            long long w=1;
            int metade=tamanho>>1;
            for(int j=0;j<metade;j++){
                int u=a[inicio+j];
                int v=a[inicio+j+metade]*w%MOD;
                int soma=u+v;
                if(soma>=MOD) soma-=MOD;
                int diferenca=u-v;
                if(diferenca<0) diferenca+=MOD;
                a[inicio+j]=soma;
                a[inicio+j+metade]=diferenca;
                w=w*raiz%MOD;
            }
        }
    }
    if(inversa){
        int inversoN=potencia(n,MOD-2);
        for(int &x:a) x=1LL*x*inversoN%MOD;
    }
}
vector<int>multiplicar(vector<int>a,vector<int>b){
    if(min(a.size(),b.size())<=32){
        vector<int>c(a.size()+b.size()-1);
        for(int i=0;i<(int)a.size();i++){
            for(int j=0;j<(int)b.size();j++){
                c[i+j]=(c[i+j]+1LL*a[i]*b[j])%MOD;
            }
        }
        return c;
    }
    int necessario=a.size()+b.size()-1;
    int tamanho=1;
    while(tamanho<necessario) tamanho<<=1;
    a.resize(tamanho);
    b.resize(tamanho);
    ntt(a,false);
    ntt(b,false);
    for(int i=0;i<tamanho;i++){
        a[i]=1LL*a[i]*b[i]%MOD;
    }
    ntt(a,true);
    a.resize(necessario);
    return a;
}
struct Polinomio{
    vector<int>coeficientes;
};
struct Comparar{
    bool operator()(const shared_ptr<Polinomio>&a,
                    const shared_ptr<Polinomio>&b)const{
        return a->coeficientes.size()>b->coeficientes.size();
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<vector<int>>g(n);
    for(int i=0,u,v;i<n-1;i++){
        cin>>u>>v;
        --u;
        --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int>pai(n,-1);
    vector<int>ordem={0};
    pai[0]=0;
    for(int i=0;i<(int)ordem.size();i++){
        int u=ordem[i];
        for(int v:g[u]){
            if(pai[v]==-1){
                pai[v]=u;
                ordem.push_back(v);
            }
        }
    }
    vector<int>filhos(n);
    for(int v=1;v<n;v++){
        filhos[pai[v]]++;
    }
    priority_queue<
        shared_ptr<Polinomio>,
        vector<shared_ptr<Polinomio>>,
        Comparar
    >fila;
    for(int quantidade:filhos){
        if(quantidade>0){
            auto polinomio=make_shared<Polinomio>();
            polinomio->coeficientes={1,quantidade};
            fila.push(polinomio);
        }
    }
    while(fila.size()>1){
        auto a=fila.top();
        fila.pop();
        auto b=fila.top();
        fila.pop();
        auto resultado=make_shared<Polinomio>();
        resultado->coeficientes=multiplicar(
            move(a->coeficientes),
            move(b->coeficientes)
        );
        fila.push(resultado);
    }
    vector<int>coeficientes=fila.top()->coeficientes;
    vector<int>fatorial(n+1,1);
    for(int i=1;i<=n;i++){
        fatorial[i]=1LL*fatorial[i-1]*i%MOD;
    }
    int resposta=0;
    for(int k=0;k<(int)coeficientes.size();k++){
        int termo=1LL*coeficientes[k]*fatorial[n-k]%MOD;
        if(k&1){
            resposta-=termo;
            if(resposta<0) resposta+=MOD;
        }else{
            resposta+=termo;
            if(resposta>=MOD) resposta-=MOD;
        }
    }
    cout<<resposta<<'\n';
}
