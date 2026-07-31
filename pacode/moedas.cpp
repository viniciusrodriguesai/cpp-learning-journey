#include <iostream>
#include <string>

using namespace std;

int main() {
    // Otimiza a entrada e saída padrão
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int remocoes = 0;

    // Compara cada caractere com o próximo
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            remocoes++;
        }
    }

    cout << remocoes << "\n";

    return 0;
}
