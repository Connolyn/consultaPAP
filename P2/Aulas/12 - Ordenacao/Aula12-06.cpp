//============================================================================
// Name        : Aula12-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Ordenacao ( partial_sort_copy)
// C++ STL - Guia de Consulta Rapida - pp. 118
// psortc01.cpp - ordena um vetor 
//****************************************************************************

/*
  void partial_sort_copy(first, last, resultado_first, resultado_last)
  
  copia e ordena os elementos do intervalo [first, last] armazenando-os no
  intervalo [resultado_first, resultado_last]
  
  A quantidade de elementos copiados (N) eh menor que last - first e 
  resultado_last - resultado_first
  
  retorna resultado_first + N  
 */
 
#include <iostream>
#include <vector>     
#include <algorithm>  

using namespace std;

int main()
{
 vector<int> v1(7), v2(7);
 
 v1[0] = 17;
 v1[1] = 12;
 v1[2] = 18;
 v1[3] = 42;
 v1[4] = 36;
 v1[5] = 16;
 v1[6] = 25;
  
 cout << "Vetor v1 antes de partial_sort_copy:  ";
 for ( int i = 0; i < 7; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 partial_sort_copy( v1.begin(), v1.end(), v2.begin(), v2.end() ); 
 
 
 cout << "Vetor v2 depois de partial_sort_copy: ";
 for ( int i = 0; i < 7; i++ )
  cout << v2[i] << " ";
 cout << endl;
 
 return 0;
}