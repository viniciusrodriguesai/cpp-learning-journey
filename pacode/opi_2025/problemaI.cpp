#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y;
    cin>>n>>x>>y;
    int fracas=0;
    for(int i=0,durabilidade;i<n;i++){
        cin>>durabilidade;
        if(durabilidade<=x) fracas++;
    }
    if(x>y) cout<<n<<'\n';
    else cout<<(fracas+1)/2<<'\n';
}
