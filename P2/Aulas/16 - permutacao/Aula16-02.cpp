//============================================================================
// Name        : Aula16-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Permutacao
// C++ STL - Guia de Consulta Rapida - pp. 130
// prvper01.cpp - calcula a permutacao anterior dos valores 1 3 2
//****************************************************************************

/* 
 bool prev_permutation(first, last)
 
 transforma o intervalo [first, last] em uma permutacao anterior, em ordem
 lexicografia
 
 se, para o intervalo [first, last] existir uma permutacao anterior, esta sera
 criada e sera retornado true. Caso contrario, o intervalo [first, last] sera
 transformado na ultima permutacao, sendo retornado false.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
 vector<int> v1(3);
  
 v1[0] = 1;
 v1[1] = 3;
 v1[2] = 2;
 
 bool resultado = prev_permutation( v1.begin(), v1.end() );
 
 if ( resultado == true)
  cout << "Existe permutacao anterior: ";
 else
 { 
  cout << "Nao existe permutacao anterior. " << endl;
  cout << "Ultima permutacao: ";
 }
 
 for ( vector<int>::iterator it = v1.begin(); it != v1.end(); ++it )
  cout << *it << " ";
 cout << endl;
 
 return 0;
}