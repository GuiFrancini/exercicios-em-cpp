/*NAME:03fatorial.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que calcula o fatorial de 10 elementos de um vetor e armazena em outro
*/

#include <iostream>

int calcularfatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calcularfatorial(num - 1);
    }
}

void Vetorfatorial(int vetorA[], int vetorB[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++) {
        vetorB[i] = calcularfatorial(vetorA[i]);
    }
}

int main() {
    const int tamanho = 10;
    int vetorA[tamanho];
    int vetorB[tamanho];

    std::cout << "Informe dez numeros inteiros para o vetor A:" << std::endl;

  for (int i = 0; i < tamanho; i++) {
        std::cout << "elemento " << i + 1 << ": ";
        std::cin >> vetorA[i];
    }

    Vetorfatorial(vetorA, vetorB, tamanho);

    std::cout << "Vetor B (fatoriais): ";

   for (int i = 0; i < tamanho; i++) {
        std::cout << vetorB[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}