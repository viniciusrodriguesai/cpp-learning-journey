#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> moves(n);

    for (int i = 0; i < n; i++) {
        cin >> moves[i];
    }

    vector<bool> dp(k + 1, false);

    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n; j++) {
            if (moves[j] <= i && dp[i - moves[j]] == false) {
                dp[i] = true;
                break;
            }
        }
    }

    if (dp[k] == true) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }

    return 0;
}
