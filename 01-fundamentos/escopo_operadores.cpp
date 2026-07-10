#include <iostream>

int n1,n2; //Variaveis globais

int main(){

    // operadores matematicos: + - / * % ()


    int n3,n4; //Variaveis locais
    int res1,res2;

    n1 = 11;
    n2 =3;
    n3 = 5;
    n4 = 2;

    res1 = n1/n2;
    res2 = n1%n2;

    std::cout << "Divisao:" << res1 << "\n";
    std::cout << "Resto:" << res2 << "\n\n";


    return 0;

}
