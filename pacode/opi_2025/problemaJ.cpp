#include <bits/stdc++.h>
using namespace std;
bool primo(long long n){
    if(n<2) return false;
    if(n%2==0) return n==2;
    for(long long divisor=3;divisor*divisor<=n;divisor+=2){
        if(n%divisor==0) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    if(primo(n)){
        cout<<1<<'\n';
        cout<<n<<'\n';
        return 0;
    }
    if(primo(n-2)){
        cout<<2<<'\n';
        cout<<2<<' '<<n-2<<'\n';
        return 0;
    }
    long long restante=n-3;
    for(long long primeiro=2;primeiro<=restante;primeiro++){
        long long segundo=restante-primeiro;
        if(primo(primeiro)&&primo(segundo)){
            cout<<3<<'\n';
            cout<<3<<' '<<primeiro<<' '<<segundo<<'\n';
            return 0;
        }
    }
}
