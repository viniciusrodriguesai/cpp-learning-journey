#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,w;
vector<ll> peso, valor;

const int MAX = 1e5+5;
ll memo[101][MAX];



ll PD(int idx, int peso_mochila){
    if (idx == n) return 0;

    auto &p = memo[idx][peso_mochila];
    if(p != -1) return p;


    if(peso[idx] > peso_mochila) return p = PD(idx+1, peso_mochila);
    return max(PD(idx + 1, peso_mochila),
               PD(idx + 1,peso_mochila - peso[idx]) + valor[idx]);
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    cin >> n >> w;

    peso.resize(n), valor.resize(n);

    for(int i = 0; i < n ; i++){
        cin >> peso[i] >> valor[i];
    }
    memset(memo,-1,sizeof(memo));
    cout << PD(0,w) << "\n";

}
