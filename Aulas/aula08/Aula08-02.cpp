//============================================================================
// Name        : Aula08-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 17
// jloper.cpp - substitui o conteudo da lista l2 pelo conteudo da lista l1
//****************************************************************************

#include <iostream>
#include <list>

using namespace std;

int main()
{
 list<int> l1, l2;
 list<int>::iterator it;

 l1.push_back(5);
 l1.push_back(6);
 l1.push_back(7);
 l1.push_back(8);

 l2.push_back(1);
 l2.push_back(1);
 l2.push_back(1);

 for (it = l1.begin(); it != l1.end(); it++)
  cout << *it << " ";
 cout << endl;
 
 cout << "l2 antes da substituicao" << endl;
 for (it = l2.begin(); it != l2.end(); it++)
  cout << *it << " ";
 cout << endl;
 
 // substitui o conteudo da lista l2 pelo conteudo da lista l1
 l2 = l1;

 cout << "l2 depois da substituicao" << endl;
 for (it = l2.begin(); it != l2.end(); it++)
  cout << *it << " ";
 cout << endl;
 
 return 0;
}