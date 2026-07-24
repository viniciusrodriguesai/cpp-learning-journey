#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long x = min(a, b);
    long long fat = 1;

    for (long long i = 1; i <= x; i++) {
        fat *= i;
    }

    cout << fat << endl;

    return 0;
}
