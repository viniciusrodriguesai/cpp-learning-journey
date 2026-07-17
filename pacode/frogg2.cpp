#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> h(N);

    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<int> dp(N, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int salto = 1; salto <= K; salto++) {
            if (i + salto < N) {
                dp[i + salto] = min(
                    dp[i + salto],
                    dp[i] + abs(h[i] - h[i + salto])
                );
            }
        }
    }

    cout << dp[N - 1] << '\n';

    return 0;
}
