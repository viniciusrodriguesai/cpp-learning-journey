#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long originalA = a;
    long long originalB = b;

    while (b != 0) {
        long long resto = a % b;
        a = b;
        b = resto;
    }

    long long mdc = a;

    return 0;
}
