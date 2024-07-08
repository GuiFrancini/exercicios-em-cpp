/*NAME:02maiormenor.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que mostra qual e o maior e o menor elemento de um vetor de 5 numeros
*/

#include <iostream>

void menoremaior(int valores[], int tamanho, int &maior, int &menor) {
    maior = menor = valores[0]; 

    for (int i = 1; i < tamanho; ++i) {
        if (valores[i] > maior) {
            maior = valores[i];
        }

        if (valores[i] < menor) {
            menor = valores[i];
     }}}

int main() {
    const int tamanho = 5;
    int valores[tamanho];

    std::cout << "Informe cinco valores inteiros:" << std::endl;

    for (int i = 0; i < tamanho; i++) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> valores[i];
    }

    int maior, menor;

    menoremaior(valores, tamanho, maior, menor);

    std::cout << "O maior valor é: " << maior << std::endl;
    std::cout << "O menor valor é: " << menor << std::endl;
    return 0;
}