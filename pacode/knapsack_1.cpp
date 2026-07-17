#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,w;
vector<ll> peso, valor;

ll PD(int idx, int peso_mochila){
    if (idx == n) return 0;
    if(peso[idx] > peso_mochila) return PD(idx+l, peso_mochila);
    return max(PD(idx + 1, peso_mochila),
               PD(idx + l,peso_mochila - peso[idx]) + valor[idx]);
}


int main(){
    ios_base::sync_with_stdio()cin.tie(NULL);
    CIN >> n >> w;

    peso.resize(n), valor.resize(n);

    for(int i = 0; i < n ; i++){
    cin >> peso[i] >> valor[i]
    }
}
