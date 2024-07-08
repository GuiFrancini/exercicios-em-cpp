/*NAME:07combinacao.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que combina 2 frases digitadas
*/

#include <iostream>
#include <sstream>
#include <vector>

std::string combinarfrase(const std::string& frase1, const std::string& frase2) {
    std::istringstream stream1(frase1);
    std::istringstream stream2(frase2);

    std::vector<std::string> palavras;
    std::string palavra;

    while (stream1 >> palavra) {
        palavras.push_back(palavra);
    }

    while (stream2 >> palavra) {
        palavras.push_back(palavra);
    }

    std::ostringstream resultado;
    for (const auto& p : palavras) {
        resultado << p << " ";
    }

    return resultado.str();
}

int main() {
    std::string frase1, frase2;

    std::cout << "Digite a primeira frase: ";
    std::getline(std::cin, frase1);

    std::cout << "Digite a segunda frase: ";
    std::getline(std::cin, frase2);

    std::string resultado = combinarfrase(frase1, frase2);

    std::cout << "A terceira frase combinada é: " << resultado << std::endl;

    return 0;
}