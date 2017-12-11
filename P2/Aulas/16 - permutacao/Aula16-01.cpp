//============================================================================
// Name        : Aula16-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Permutacao
// C++ STL - Guia de Consulta Rapida - pp. 129
// nxtper01.cpp - calcula a proxima permutacao dos valores 1 2 3
//****************************************************************************

/*
 permutacao - alteracao dos elementos que formam um todo, 
 a fim de se obter nova combinacao.
*/

/*
  bool next_permutation(first, last)
  
  transforma o intervalo [first, last] em uma proxima permutacao, em ordem
  lexicografica. 
  
  Se para o intervalo [first, last] existir uma proxima
  permutacao, esta sera criada e sera retornado true.

  Caso contrario, o intervalo [first, last] sera transformado na primeira
  permutacao, sendo retornado false  
*/

#include <iostream>
#include <vector>     
#include <algorithm>

using namespace std;

int main()
{
 vector<int> v1(3);
 
 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 
 bool resultado = next_permutation( v1.begin(), v1.end() );
 if (resultado == true)
  cout << "Existe proxima permutacao: ";
 else
 {
  cout << "Nao existe proxima permutacao. " << endl;
  cout << "Primeira permutacao: ";
 }
 
 for ( vector<int>::iterator it = v1.begin(); it != v1.end(); ++it )
   cout << *it << " ";
 cout << endl;
 
 return 0;
}