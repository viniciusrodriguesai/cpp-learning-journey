#include <bits/stdc++.h>
using namespace std;
struct P {
    long long s, r;
    vector<int> id;
};

__int128 num(const P& a, const P& b) {
    return (__int128)a.s * b.s * (a.r - b.r);
}
__int128 den(const P& a, const P& b) {
    return (__int128)a.r * b.r * (b.s - a.s);
}
bool maiorInter(const P& a, const P& b, const P& c) {
    return num(a, b) * den(b, c) > num(b, c) * den(a, b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    for (int i = 1; i <= n; i++) {
        int s, r;
        cin >> s >> r;
        v.push_back({s, -r, i});
    }
        sort(v.begin(), v.end());
    vector<P> a;
    for (int i = 0; i < n;) {
        int j = i;
        int s = get<0>(v[i]);
        int bestR = -get<1>(v[i]);
        vector<int> ids;
        while (j < n && get<0>(v[j]) == s) {
            int r = -get<1>(v[j]);
            if (r == bestR)
                ids.push_back(get<2>(v[j]));
            j++;
        }
        a.push_back({s, bestR, ids});
        i = j;
    }
    vector<P> good;
    long long maxR = 0;
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        if (a[i].r > maxR) {
            good.push_back(a[i]);
            maxR = a[i].r;
        }
    }
    reverse(good.begin(), good.end());
    vector<P> hull;
    for (auto p : good) {
        while (hull.size() >= 2 && maiorInter(hull[hull.size() - 2], hull.back(), p))
            hull.pop_back();
        hull.push_back(p);
    }
        vector<int> ans;
    for (auto &p : hull)
        for (int id : p.id)
            ans.push_back(id);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < (int)ans.size(); i++) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
    return 0;
}
