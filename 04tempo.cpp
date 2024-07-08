/*NAME:04tempo.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que dado um valor converte o para segundos, minutos e horas
*/

#include <iostream>

void converterSegundos(int totalsegudos, int &horas, int &minutos, int &segundos) {
    horas = totalsegudos / 3600;          
    minutos = (totalsegudos % 3600) / 60;  
    segundos = totalsegudos % 60;
}

int main() {
    int totalsegudos, horas, minutos, segundos;

    std::cout << "Informe o total de segundos: ";
    std::cin >> totalsegudos;

    converterSegundos(totalsegudos, horas, minutos, segundos);

    std::cout << "Horas: " << horas << " minutos: " << minutos << " segundos: " << segundos << std::endl;
    return 0;
}