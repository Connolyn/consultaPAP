//============================================================================
// Name        : Aula08-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 19
// jlpopfro.cpp - elimina o primeiro elemento da lista
// jlpusfro.cpp - insere o elemento "x" no inicio da lista
//****************************************************************************

#include <iostream>
#include <list>

using namespace std;

int main()
{
 list<string> l1;
 list<string>::iterator it;

 l1.push_back("alfa");
 l1.push_back("beta");

 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;

 // insere o elemento no inicio da lista
 l1.push_front("gama");
 
 // elimina o primeiro elemento da lista
 l1.pop_front();
 
 // elimina o ultimo elemento da lista
 l1.pop_back();

 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;
 
 return 0;
}