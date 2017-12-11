//============================================================================
// Name        : Aula12-07.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Operacoes de Comparacao e Pesquisa - Busca binaria (binary_search)
// C++ STL - Guia de Consulta Rapida - pp. 120
// bsearc01.cpp - procura em um vetor um elemento equivalente ao valor 36
//****************************************************************************

#include <iostream>
#include <vector>     
#include <algorithm>

using namespace std;

int main()
{
 vector<int> v1(5);
 
 v1[0] = 12;
 v1[1] = 17;
 v1[2] = 18;
 v1[3] = 36;
 v1[4] = 42;
 
 bool resultado = binary_search( v1.begin(), v1.end(), 36 );
 if ( resultado == true )
  cout << "Valor encontrado" << endl;
 else
  cout << "Valor nao encontrado" << endl;
 
 return 0;
}