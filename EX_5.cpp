/*Ler N nomes e guardar em um vetor, depois imprimi-los na ordem que foram inseridos*/

#include <iostream>
#include <string>
#include <vector>

int main(void){

    int n = 0;

   std:: cout << "Digite a quantia de nomes de deseja escrever: " << std::endl;
   std:: cin >> n;
   std::cin.ignore();

   std::string name[n];

   for (size_t i = 0; i < n; i++)
   {
    std::cout << "Escreva o nome " << i+1 << std::endl;
    getline(std::cin, name[i]);
   }
    
    for (size_t i = 0; i < n; i++)
    {
        std::cout << "Nome " << i << ":" << name[i] << std::endl; 
    }
    

    return 0;
}