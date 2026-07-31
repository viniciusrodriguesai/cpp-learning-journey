#include <bits/stdc++.h>
using namespace std;
struct P{
    long long x,y;
};
long long cross(const P&a,const P&b,const P&c){
    return (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);
}
long long C5(long long n){
    if(n<5) return 0;
    return n*(n-1)*(n-2)*(n-3)*(n-4)/120;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<P>p(n);
    for(auto &q:p) cin>>q.x>>q.y;
    int blocos=(n+63)/64;
    vector<vector<vector<unsigned long long>>>esquerda(
        n,vector<vector<unsigned long long>>(
            n,vector<unsigned long long>(blocos)
        )
    );
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            for(int k=0;k<n;k++){
                if(cross(p[i],p[j],p[k])>0){
                    esquerda[i][j][k>>6]|=1ULL<<(k&63);
                }
            }
        }
    }
    long long ans=2*C5(n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int a=i,b=j,c=k;
                if(cross(p[a],p[b],p[c])<0) swap(b,c);
                int dentro=0;
                for(int bloco=0;bloco<blocos;bloco++){
                    unsigned long long mascara=
                        esquerda[a][b][bloco]&
                        esquerda[b][c][bloco]&
                        esquerda[c][a][bloco];
                    dentro+=__builtin_popcountll(mascara);
                }
                ans-=1LL*dentro*(n-3-dentro);
            }
        }
    }
    cout<<ans/2<<'\n';
}
