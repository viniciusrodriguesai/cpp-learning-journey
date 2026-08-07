#include <bits/stdc++.h>
using namespace std;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K;
    cin >> N >> K;
    int digitos = 0;
    while (N > 0) {
        N /= K;
        ++digitos;
    }

}
