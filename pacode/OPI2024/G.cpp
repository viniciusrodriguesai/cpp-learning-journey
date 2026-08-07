#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;
const int G = 3;
int pot(int a, int e) {
    ll r = 1;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = (ll)a * a % MOD;
        e >>= 1;
    }
    return r;
}
void ntt(vector<int>& a, bool inv) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1) j ^= bit;
        j ^= bit;
        if (i < j) swap(a[i], a[j]);
    }
    for (int len = 2; len <= n; len <<= 1) {
        int wlen = pot(G, (MOD - 1) / len);
        if (inv) wlen = pot(wlen, MOD - 2);
        for (int i = 0; i < n; i += len) {
            ll w = 1;
            for (int j = 0; j < len / 2; j++) {
                int u = a[i + j];
                int v = (ll)a[i + j + len / 2] * w % MOD;
                a[i + j] = u + v;
                if (a[i + j] >= MOD) a[i + j] -= MOD;
                a[i + j + len / 2] = u - v;
                if (a[i + j + len / 2] < 0) a[i + j + len / 2] += MOD;
                w = w * wlen % MOD;
            }
        }
    }
    if (inv) {
        int ni = pot(n, MOD - 2);
        for (int &x : a) x = (ll)x * ni % MOD;
    }
}
struct DSU {
    int p[6];
    DSU() {
        iota(p, p + 6, 0);
    }
    int find(int x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    }
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        p[a] = b;
        return true;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S, T;
    cin >> S >> T;
    int n = S.size();
    int m = T.size();
    int q = n - m + 1;
    int L = 1;
    while (L < n + m) L <<= 1;
    vector<vector<int>> A(6, vector<int>(L));
    vector<vector<int>> B(6, vector<int>(L));
    for (int i = 0; i < n; i++)
        A[S[i] - 'a'][i] = 1;
    for (int i = 0; i < m; i++)
        B[T[i] - 'a'][m - 1 - i] = 1;
    for (int c = 0; c < 6; c++) {
        ntt(A[c], false);
        ntt(B[c], false);
    }
    vector<int> mask(q, 0);
    int eu[15], ev[15];
    int e = 0;
    for (int x = 0; x < 6; x++) {
        for (int y = x + 1; y < 6; y++) {
            eu[e] = x;
            ev[e] = y;
            vector<int> C(L);
            for (int i = 0; i < L; i++)
                C[i] = ((ll)A[x][i] * B[y][i] + (ll)A[y][i] * B[x][i]) % MOD;
            ntt(C, true);
            for (int i = 0; i < q; i++)
                if (C[i + m - 1] != 0)
                    mask[i] |= 1 << e;
            e++;
        }
    }
    vector<int> dist(1 << 15);
    for (int ms = 0; ms < (1 << 15); ms++) {
        DSU dsu;
        int ans = 0;
        for (int j = 0; j < 15; j++)
            if ((ms >> j) & 1)
                ans += dsu.unite(eu[j], ev[j]);
        dist[ms] = ans;
    }
    for (int i = 0; i < q; i++) {
        if (i) cout << ' ';
        cout << dist[mask[i]];
    }
    cout << '\n';
    return 0;
}
