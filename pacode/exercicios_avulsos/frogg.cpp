#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    vector<int> dp(n, 0);
    dp[0] = 0;
    if (n > 1) {
        dp[1] = abs(h[1] - h[0]);
    }
    for (int i = 2; i < n; i++) {
        int pulo_um = dp[i - 1] + abs(h[i] - h[i - 1]);
        int pulo_dois = dp[i - 2] + abs(h[i] - h[i - 2]);
        dp[i] = min(pulo_um, pulo_dois);
    }
    cout << dp[n - 1] << "\n";
    return 0;
}
