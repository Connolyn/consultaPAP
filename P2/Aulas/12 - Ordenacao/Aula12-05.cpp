//============================================================================
// Name        : Aula12-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Ordenacao ( partial_sort)
// C++ STL - Guia de Consulta Rapida - pp. 117 a 118
// psort01.cpp - ordena um vetor 
//****************************************************************************

/*
  void partial_sort(first, middle, last)

  ordena os (middle - first) elementos iniciais do intervalo [first, last]
  armazenando-os no intervalo [first, middle] 
  
  Reorganiza os elementos no intervalo [primeiro, último], de tal forma que os
  elementos antes de middle são os menores elementos em todo o intervalo e 
  são ordenados em ordem crescente, enquanto os elementos restantes são deixados 
  sem qualquer ordem específica.
  
*/

#include <iostream>
#include <vector>     
#include <algorithm>

using namespace std;

int main()
{
 vector<int> v1(7);
 
 v1[0] = 17;
 v1[1] = 12;
 v1[2] = 18;
 v1[3] = 42;
 v1[4] = 36;
 v1[5] = 16;
 v1[6] = 25;
 
 cout << "Vetor antes de partial_sort:  ";
 for ( int i = 0; i < 7; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 cout << "Valor do elemento middle: " 
      << *(v1.begin() + 4) << endl;
      
 partial_sort(v1.begin(), v1.begin() + 4, v1.end());
 
 cout << "Vetor depois de partial_sort: ";
 for ( int i = 0; i < 7; i++)
   cout << v1[i] << " ";
 cout << endl;
 
 cout << "Valor do elemento middle: " 
      << *(v1.begin() + 4) << endl;
      
 return 0;
}