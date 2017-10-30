//============================================================================
// Name        : Aula08-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 17 e 18
// jlopeqeq.cpp
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
 //l1.push_back(4);

 l2.push_back(1);
 l2.push_back(2);
 l2.push_back(3);

 // testar com <, <=, >, >= e !=
 bool resultado = (l1 == l2);
 cout << resultado << endl;
  
 return 0;
}