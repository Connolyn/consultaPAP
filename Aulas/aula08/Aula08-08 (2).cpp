//============================================================================
// Name        : Aula08-08.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 21 e 22
// jlspli01.cpp - insere uma lista no final de outra
//****************************************************************************

#include <iostream>
#include <list>

using namespace std;

int main()
{
 list<int> l1, l2;
 list<int>::iterator it;

 l1.push_back(1);
 l1.push_back(2);
 l1.push_back(3);

 l2.push_back(4);
 l2.push_back(5);
 l2.push_back(6);

 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;

 for (it = l2.begin(); it != l2.end(); ++it)
  cout << *it << " ";
 cout << endl;

 // insere o conteudo da lista l2 na lista chamadora antes da posicao apontada
 // pelo iterador it e remove os elementos da lista l2
 l1.splice(l1.begin(), l2);

 cout << "Lista 1" << endl;
 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;

 cout << "Lista 2" << endl;
 for (it = l2.begin(); it != l2.end(); ++it)
  cout << *it << " ";
 cout << endl;
 
 return 0;
}