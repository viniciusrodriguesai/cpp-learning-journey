#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<string> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), [](const string &x, const string &y) {
        if (x.size() != y.size())
            return x.size() > y.size();
        return x > y;
    });
    vector<string> v = {a[0], a[1], a[2]};
    sort(v.begin(), v.end(), [](const string &x, const string &y) {
        return x + y > y + x;
    });
    cout << v[0] << v[1] << v[2] << '\n';
    return 0;
}
