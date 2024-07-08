/*NAME:06matriz.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que dada uma matriz 5x5 soma seus elementos
*/

#include <iostream>

int somamatriz(int matriz[5][5]) {
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    
    int matriz[5][5];

    std::cout << "Digite os elementos da matriz 5x5:" << std::endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "Matriz[" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    int soma = somamatriz(matriz);

    std::cout << "A soma dos elementos da matriz é: " << soma<< std::endl;
    return 0;
}