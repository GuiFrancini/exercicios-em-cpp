/*NAME:09inverter.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que inverte uma frase
*/

#include <iostream>
#include <string>
#include <algorithm> 


std::string fraseinversor(const std::string& frase) {
    std::string fraseinvertida= frase;

    std::reverse(fraseinvertida.begin(), fraseinvertida.end());

    return fraseinvertida;
}

int main() {
   std::string frase;

   std::cout << "Digite uma frase:";
    std::getline(std::cin, frase);

    std::string fraseinvertida= fraseinversor(frase);

    std::cout << "Frase invertida: " << fraseinvertida<< std::endl;

    return 0;
}