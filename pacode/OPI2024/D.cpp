#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    bool tem_impar = false;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x & 1) tem_impar = true;
    }

}

