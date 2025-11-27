/*Ler nome e idade da pessoa e imprimir*/

#include <iostream>
#include <string>

using namespace std;

int main(void){

    string nome;
    int idade;

    cout << "Escreva o seu nome completo: ";
    getline(cin, nome);
    cout << "Agora escreva a sua idade: ";
    cin >> idade;
    cin.ignore();

    cout << "Ola " << nome << " Voce tem " << idade << " anos" << endl;


    return 0;
}