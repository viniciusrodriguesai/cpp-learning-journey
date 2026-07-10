#include <iostream>

using namespace std;
using namespace std;

int main() {
    // Declaração das variáveis
    int vidas = 0;
    char letra = 'B';
    double decimal = 5.2;
    bool vivo = true;
    string nome = "Bruno";

    // Interação com o usuário
    cout << "Digite o número de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Digite um valor: ";
    cin >> decimal;

    cout << "Digite seu nome: ";
    cin >> nome;

    // Exibição dos resultados
    cout << "\nVidas: " << vidas << endl;
    cout << "Letra: " << letra << endl;
    cout << "Dinheiro: " << decimal << endl;
    cout << "Vivo: " << vivo << endl;
    cout << "Nome: " << nome << endl;

    return 0;
}
