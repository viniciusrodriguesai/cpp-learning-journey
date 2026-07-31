#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>pesos(2*n);
    for(int &peso:pesos) cin>>peso;
    sort(pesos.begin(),pesos.end());
    int resposta=INT_MAX;
    for(int primeiro=0;primeiro<2*n;primeiro++){
        for(int segundo=primeiro+1;segundo<2*n;segundo++){
            vector<int>restantes;
            for(int i=0;i<2*n;i++){
                if(i!=primeiro&&i!=segundo){
                    restantes.push_back(pesos[i]);
                }
            }
            int instabilidade=0;
            for(int i=0;i<(int)restantes.size();i+=2){
                instabilidade+=restantes[i+1]-restantes[i];
            }
            resposta=min(resposta,instabilidade);
        }
    }
    cout<<resposta<<'\n';
}
