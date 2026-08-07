#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    unordered_map<string, int> freq;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        ++freq[s];
    }
    int max_freq = 0;
    for (auto& p : freq) {
        if (p.second > max_freq) max_freq = p.second;
    }
}
