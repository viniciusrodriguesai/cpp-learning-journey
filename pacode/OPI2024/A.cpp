#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll pow10[7] = {1, 10, 100, 1000, 10000, 100000, 1000000};
struct Card {
    int val, len;
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<Card> cards(N);
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        int len = 1;
        if (x >= 10) ++len;
        if (x >= 100) ++len;
        if (x >= 1000) ++len;
        if (x >= 10000) ++len;
        if (x >= 100000) ++len;
        if (x >= 1000000) ++len;
        cards[i] = {x, len};
    }
    sort(cards.begin(), cards.end(), [](const Card& a, const Card& b) {
        ll ab = (ll)a.val * pow10[b.len] + b.val;
        ll ba = (ll)b.val * pow10[a.len] + a.val;
        return ab > ba;
    });
    ll ans = 0;
    for (int i = 0; i < 3; ++i) {
        ans = ans * pow10[cards[i].len] + cards[i].val;
    }
    cout << ans << '\n';
    return 0;
}
