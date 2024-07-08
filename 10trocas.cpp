/*NAME:10trocas.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que recebe uma frase e se tiver a palavra escola ele troca
*/

#include <iostream>
#include <string>

std::string mudarpalavra(const std::string& frase, const std::string& palavra, const std::string& novapalavra) {
    std::string frasemudada = frase;
    size_t posicao = frasemudada.find(palavra);

    while (posicao != std::string::npos) {
        frasemudada.replace(posicao, palavra.length(), novapalavra);
        posicao = frasemudada.find(palavra, posicao + novapalavra.length());
    }
    return frasemudada;
}

int main() {
    std::string frase, palavra, novapalavra;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    std::cout << "Digite a palavra a ser substituída: ";
    std::cin >> palavra;

    std::cout << "Digite a nova palavra: ";
    std::cin >> novapalavra;

    std::string frasemudada = mudarpalavra(frase, palavra, novapalavra);

    std::cout << "Frase modificada: " << frasemudada << std::endl;

    return 0;
}