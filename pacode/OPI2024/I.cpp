#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> cor(n + 1, -1);
    long long cnt[2] = {0, 0};
    queue<int> q;
    cor[1] = 0;
    q.push(1);
        while (!q.empty()) {
        int u = q.front();
        q.pop();
        cnt[cor[u]]++;
        for (int v : g[u]) {
            if (cor[v] == -1) {
                cor[v] = cor[u] ^ 1;
                q.push(v);
            }
        }
    }
    cout << cnt[0] * cnt[1] - (n - 1) << '\n';
    return 0;
}
