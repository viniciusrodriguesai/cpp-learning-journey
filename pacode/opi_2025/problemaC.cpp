#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,b,mod;
    cin>>n>>m>>b>>mod;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    vector<vector<int>>dp(m+1,vector<int>(b+1));
    dp[0][0]=1%mod;
    for(int x:a){
        for(int linhas=1;linhas<=m;linhas++){
            for(int bugs=x;bugs<=b;bugs++){
                dp[linhas][bugs]=(dp[linhas][bugs]+dp[linhas-1][bugs-x])%mod;
            }
        }
    }
    int ans=0;
    for(int bugs=0;bugs<=b;bugs++) ans=(ans+dp[m][bugs])%mod;
    cout<<ans<<'\n';
}
