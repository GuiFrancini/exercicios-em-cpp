/*NAME:08frase.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que conta quantas vezes a palavra AULA apararece na frase
*/

#include <iostream>
#include <string>
#include <algorithm>  


int contarpalavra(const std::string& frase) {
    const std::string palavramaiuscula = "AULA";
    const std::string palavraminuscula = "aula";

    std::string frasemini = frase;
    std::transform(frasemini.begin(), frasemini.end(), frasemini.begin(), ::tolower);

    int cont = 0;
    size_t posicaomaiuscula = frase.find(palavramaiuscula);

    while (posicaomaiuscula != std::string::npos) {
        ++cont;
        posicaomaiuscula = frase.find(palavramaiuscula, posicaomaiuscula + 1);
    }

   
    size_t posicaominuscula= frasemini.find(palavraminuscula);

    while (posicaominuscula!= std::string::npos) {
        ++cont;
        posicaominuscula= frasemini.find(palavraminuscula, posicaominuscula+ 1);
    }

    return cont;
}

int main() {
    std::string frase;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    int quantidadedevezes = contarpalavra(frase);
    std::cout << "As palavras 'AULA' aparecem " << quantidadedevezes << " vezes na frase." << std::endl;

    return 0;
}