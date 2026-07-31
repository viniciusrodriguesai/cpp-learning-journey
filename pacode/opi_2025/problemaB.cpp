#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int resposta=0;
        for(int digito=1;digito<=9;digito++){
            long long numero=0;
            for(int tamanho=1;tamanho<=10;tamanho++){
                numero=numero*10+digito;
                if(numero<=n) resposta++;
                else break;
            }
        }
        cout<<resposta<<'\n';
    }
}
