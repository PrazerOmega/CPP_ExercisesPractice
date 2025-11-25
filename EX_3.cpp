/*Ler um nome usando std::string*/

#include <iostream>
#include <string>

using namespace std;

int main(void){
    string palavra;

    cout << "Escreva a palavra: ";
    cin >> palavra;
    cout << "A palavra escrita foi: " << palavra << endl;

    return 0;
}