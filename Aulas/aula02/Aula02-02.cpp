//============================================================================
// Name        : Aula02-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

/*
  Diretiva de pre-processamento para incluir
  o arquivo de cabecalho de fluxo de entrada e saida.
  Sao processadas pelo pre-processador ANTES da compilacao.
*/

// biblioteca de C++
#include <iostream>
// biblioteca de C
#include <stdlib.h>

// espaco de nomes - padrao - dispensa o uso do prefixo std
using namespace std;

int main()
{
 float T, V, D, C;

 // << operador de insercao de fluxo (stream)
 std::cout << "Exemplo\n";

 cout << "Calculo de distancia e consumo " << endl;
 cout << "Por favor, digite o tempo de viagem, em horas: ";
 // >> operador de extracao de fluxo
 cin >> T;

 cout << "Por favor, digite a velocidade media, em km/h: ";
 cin >> V;

 D = V * T;
 C = D / 12;

 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);

 // std::endl forca os dados de saida armazenados
 // a serem exibidos no momento de sua chamada
 cout << "A distancia foi " << D << " km" << endl;
 cout << "O consumo foi de " << C << " litros" << endl;

 // windows
 system("pause");

 // indica que o programa terminou com sucesso
 return 0;
}
