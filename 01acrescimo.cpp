/*NAME:01acrescimo.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que calcula o percentual do reajuste do valor do produto 
*/

#include <iostream>

double calcularporcentagem(double valorantigo, double valoratual) {
    if (valorantigo == 0) {

        std::cerr << "Erro: O valor antigo não pode ser zero." << std::endl;
        return 0.0;
    }
//calculando percentual
    double porcentagem = ((valoratual - valorantigo) / valorantigo) * 100.0;
    return porcentagem;
}

int main() {

    double valorantigo, valoratual;

    std::cout << "Informe o valor antigo do produto: ";
    std::cin >> valorantigo;

    std::cout << "Informe o valor atual do produto: ";
    std::cin >> valoratual;

    double porcentagem = calcularporcentagem(valorantigo, valoratual);

    std::cout << "O percentual de acréscimo é: " << porcentagem << "%" << std::endl;

    return 0;
}