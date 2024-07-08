/*NAME:05horario.cpp
  AUTHOR:Guilherme Francini de Oliveira
  DATE:14/11/2023
  DESCRIPTION: algoritmo que dada a hora de inicio e termino calcula a duração do intervalo
*/

#include <iostream>

int calculoemminutos(int horainicio, int minutoinicio, int horatermino, int minutotermino) {
    const int minutosporhora = 60;
    const int horaspordia= 24;

    int minutosinicio = horainicio * minutosporhora + minutoinicio;
    int minutostermino = horatermino * minutosporhora + minutotermino;

    int duracaoEmMinutos = (minutostermino - minutosinicio + horaspordia* minutosporhora) % (horaspordia* minutosporhora);

    return duracaoEmMinutos;
}

int main() {
    int horainicio, minutoinicio, horatermino, minutotermino;

    std::cout << "Informe a hora de início do jogo (horas:minutos): ";
    std::cin >> horainicio >> minutoinicio;

    std::cout << "Informe a hora de término do jogo (horas:minutos): ";
    std::cin >> horatermino >> minutotermino;

    int duracaoEmMinutos = calculoemminutos(horainicio, minutoinicio, horatermino, minutotermino);

    std::cout << "A duração do jogo é de " << duracaoEmMinutos << " minutos." << std::endl;


    return 0;
}
