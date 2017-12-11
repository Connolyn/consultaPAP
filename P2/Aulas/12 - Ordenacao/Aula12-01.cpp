//============================================================================
// Name        : Aula12-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Ordenacao (sort)
// C++ STL - Guia de Consulta Rapida - pp. 119
// sort01.cpp - ordena ascendentemente os elementos do intervalo [first, last]
//****************************************************************************

#include <iostream>
#include <vector>  
#include <algorithm> 

using namespace std;

int main()
{
 vector<int> v1(5);
 
 v1[0] = 17;
 v1[1] = 12;
 v1[2] = 18;
 v1[3] = 42;
 v1[4] = 18;
 
 cout << "Antes de sort: ";
 for ( int i = 0; i < 5; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 // ordena ascendentemente os elementos usando o operador <
 // A ordem relativa dos elementos equivalentes eh mantida
 sort( v1.begin(), v1.end() );
 
 cout << "Depois de sort: ";
 for ( int i = 0; i < 5; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 return 0;
}