//============================================================================
// Name        : Aula12-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Ordenacao (stable_sort) --> MergeSort
// C++ STL - Guia de Consulta Rapida - pp. 120
// stsort02.cpp - ordena um vetor descendentemente com o functor binario greater<>
//****************************************************************************

#include <iostream>
#include <vector>     
#include <functional> 
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
 v1[6] = 18;
 
 cout << "Antes de stable_sort:  ";
 for ( int i = 0; i < 7; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 // MergeSort
 stable_sort( v1.begin(), v1.end(), greater<int>() );
 
 cout << "Depois de stable_sort: ";
 for ( int i = 0; i < 7; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 return 0;
}