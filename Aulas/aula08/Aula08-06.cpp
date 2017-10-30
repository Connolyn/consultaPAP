//============================================================================
// Name        : Aula08-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 19 e 20
// jlremove.cpp - elimina da lista chamadora os elementos iguais a "valor"
//****************************************************************************

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
 list<string> l1;
 list<string>::iterator it;

 l1.push_back("alfa");
 l1.push_back("beta");
 l1.push_back("alfa");

 // elimina os elementos iguais a "alfa"
 l1.remove("alfa");

 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;
 
 return 0;
}