#include <iostream>

int n1,n2; //Variaveis globais

int main(){

    // operadores matematicos: + - / * % ()


    int n3,n4; //Variaveis locais
    int res;

    n1 = 11;
    n2 =3;
    n3 = 5;
    n4 = 2;

    res = n1 + n2 + n3 + n4;

    std::cout << "Soma de todas as variaveis:" << res << "\n\n";

    return 0;

}
