//============================================================================
// Name        : Aula08-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 18 e 19
// jlmerge.cpp
//****************************************************************************

#include <iostream>
#include <list>

using namespace std;

int main()
{
 int tam = 4;
 list<int> l1, l2;
 list<int>::iterator it;

 //l1.push_back(1);
 //l1.push_back(2);
 //l1.push_back(3);

 //l2.push_back(1);
 //l2.push_back(2);
 //l2.push_back(3);

 for (int i = 0; i < tam; i++)
  l1.push_back( 2 * i + 1);

 for (int i = 0; i < tam; i++)
  l2.push_back( 2 * i + 2);

 for (it = l1.begin(); it != l1.end(); it++)
  cout << *it << " ";
 cout << endl;

 for (it = l2.begin(); it != l2.end(); it++)
  cout << *it << " ";
 cout << endl << endl;

 // intercala a lista l1 e a lista l2
 // a lista l1 ficara vazia apos a intercalacao
 l2.merge(l1);
 cout << "depois de merge()" << endl;

 cout << "Lista 1" << endl;
 for (it = l1.begin(); it != l1.end(); it++)
  cout << *it << " ";
 cout << endl;

 cout << "Lista 2" << endl;
 for (it = l2.begin(); it != l2.end(); it++)
  cout << *it << " ";
 cout << endl;
  
 return 0;
}