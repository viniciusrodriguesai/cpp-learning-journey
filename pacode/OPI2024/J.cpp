#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(2 * n + 2, vector<int>(4, 0));
    dp[1][0] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[1][3] = 1;
    int add[4][4] = {
        {0, 1, 1, 1},
        {0, 0, 2, 0},
        {0, 2, 0, 0},
        {1, 1, 1, 0}
    };
    for (int col = 2; col <= n; col++) {
        vector<vector<int>> ndp(2 * n + 2, vector<int>(4, 0));
        for (int c = 1; c <= 2 * n; c++) {
            for (int prev = 0; prev < 4; prev++) {
                if (dp[c][prev] == 0) continue;
                for (int cur = 0; cur < 4; cur++) {
                    int nc = c + add[prev][cur];
                    if (nc > 2 * n) continue;
                    ndp[nc][cur] += dp[c][prev];
                    if (ndp[nc][cur] >= MOD)
                        ndp[nc][cur] -= MOD;
                }
            }
        }
        dp.swap(ndp);
    }
    long long ans = 0;
    for (int s = 0; s < 4; s++)
        ans += dp[k][s];
    cout << ans % MOD << '\n';
    return 0;
}
