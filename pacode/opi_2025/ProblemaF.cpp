#include <bits/stdc++.h>
using namespace std;
vector<int>bfs(int inicio,const vector<vector<int>>&g){
    int n=g.size();
    vector<int>dist(n,-1);
    queue<int>fila;
    dist[inicio]=0;
    fila.push(inicio);
    while(!fila.empty()){
        int u=fila.front();
        fila.pop();
        for(int v:g[u]){
            if(dist[v]==-1){
                dist[v]=dist[u]+1;
                fila.push(v);
            }
        }
    }
    return dist;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    --x;
    vector<vector<int>>g(n);
    for(int i=0,u,v;i<n-1;i++){
        cin>>u>>v;
        --u;
        --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int>alice=bfs(0,g);
    vector<int>bob=bfs(x,g);
    int melhor=0;
    for(int i=0;i<n;i++){
        if(bob[i]<alice[i]){
            melhor=max(melhor,alice[i]);
        }
    }
    cout<<2*melhor<<'\n';
}
