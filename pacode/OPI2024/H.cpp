#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(N, 0));
    vector<bool> used(N * N + 1, false);
    auto put = [&](int i, int j, int x) {
        a[i][j] = x;
        used[x] = true;
    };
    if (N % 2 == 0) {
        int k = N / 2;
        int C = 2 * N + 1;
        while (C % 6 != 3)
            C++;
        for (int j = 0; j < N; j++) {
            int odd = 2 * j + 1;
            int even = C - odd;
            put(k - 1, j, odd);
            put(k, j, even);
        }
        vector<int> odds, evens;
        for (int x = 1; x <= N * N; x++) {
            if (used[x]) continue;
            if (x % 2)
                odds.push_back(x);
            else
                evens.push_back(x);
        }
        int po = 0, pe = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (a[i][j] != 0)
                    continue;
                if (i < k)
                    put(i, j, odds[po++]);
                else
                    put(i, j, evens[pe++]);
            }
        }
    } else {
        int k = N / 2;
        put(k - 1, k + 1, 1);
        put(k, k + 1, 8);
        put(k, k, 7);
        put(k + 1, k, 2);
        int t = 0;
        for (int j = k + 2; j < N; j++) {
            int odd = 6 * t + 3;
            int even = 6 * t + 6;
            put(k - 1, j, odd);
            put(k, j, even);
            t++;
        }
        for (int j = 0; j < k; j++) {
            int odd = 6 * t + 3;
            int even = 6 * t + 6;
            put(k, j, odd);
            put(k + 1, j, even);
            t++;
        }
        vector<int> odds, evens;
        for (int x = 1; x <= N * N; x++) {
            if (used[x]) continue;
            if (x % 2)
                odds.push_back(x);
            else
                evens.push_back(x);
        }
        int po = 0, pe = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (a[i][j] != 0)
                    continue;
                bool oddRegion;
                if (i < k)
                    oddRegion = true;
                else if (i > k)
                    oddRegion = false;
                else
                    oddRegion = (j <= k);
                if (oddRegion)
                    put(i, j, odds[po++]);
                else
                    put(i, j, evens[pe++]);
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j)
                cout << ' ';
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
