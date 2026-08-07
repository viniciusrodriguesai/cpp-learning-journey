#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll pot(ll a, ll e, ll mod) {
    ll r = 1;
    while (e) {
        if (e & 1) r = r * a % mod;
        a = a * a % mod;
        e >>= 1;
    }
    return r;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, p, x;
    cin >> a >> b >> p >> x;
    ll inv = pot(a, p - 2, p);
    ll cur = b;
    ll periodo = p * (p - 1);
    ll ans = 0;
    for (ll r = 0; r < p - 1; r++) {
        ll c = cur;
        ll k = (r - c) % p;
        if (k < 0) k += p;
        ll n = r + (p - 1) * k;
        if (n >= 1 && n <= x)
            ans += (x - n) / periodo + 1;
        cur = cur * inv % p;
    }
    cout << ans << '\n';
    return 0;
}
