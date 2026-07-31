#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n+1);
    int mx=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    vector<int>p1(mx+1,-1),p2(mx+1,-1);
    for(int i=1;i<=n;i++){
        int v=a[i];
        if(p1[v]==-1) p1[v]=i;
        else if(p2[v]==-1) p2[v]=i;
    }
    long long melhor=LLONG_MAX;
    int ans1=-1,ans2=-1;
    for(int d=1;d<=mx;d++){
        int v1=-1,v2=-1,i1=-1,i2=-1;
        for(int v=d;v<=mx;v+=d){
            if(p1[v]!=-1){
                if(v1==-1){
                    v1=v;
                    i1=p1[v];
                    if(p2[v]!=-1){
                        v2=v;
                        i2=p2[v];
                        break;
                    }
                }else{
                    v2=v;
                    i2=p1[v];
                    break;
                }
            }
        }
        if(v2!=-1){
            long long mmc=1LL*v1/d*v2;
            if(mmc<melhor){
                melhor=mmc;
                ans1=i1;
                ans2=i2;
            }
        }
    }
    if(ans1>ans2) swap(ans1,ans2);
    cout<<ans1<<' '<<ans2<<'\n';
}
