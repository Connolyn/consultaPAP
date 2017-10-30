//============================================================================
// Name        : Aula08-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 16 e 17
// jlcria01.cpp - cria uma lista com 3 elementos, inicializada com o valor 9
// jlconcop.cpp - cria a lista l2 a partir da lista l1 
// jlint.cpp - cria a lista l3 com intervalos de elementos da lista 1
//****************************************************************************

/*
 A classe-template list representa uma estrutura de dados do tipo 
 lista duplamente encadeada.
 Em uma lista cada elemento, exceto o primeiro e o ultimo, eh ligado,
 por um ponteiro, ao elemento anterior e ao proximo, permitindo que seja
 percorrida nos dois sentidos.
 Em uma lista os elementos nao sao armazenados de forma contigua e nao
 podem ser acessador pelo operador [].
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
 // cria uma lista com 3 elementos, inicializada com o valor 9   
 list<int> l1(3, 9);
 
 // cria uma lista vazia
 list<int> l2;
 list<int>::iterator it;

 l2.push_back(1);
 l2.push_back(2);
 l2.push_back(3);

 // cria uma lista, inicializa com os elementos do intervalo [first, last]
 list<int> l3(l1.begin(), l1.end());

 cout << "Lista 3" << endl;
 for (it = l3.begin(); it != l3.end(); it++)
  cout << *it << " ";
 cout << endl;
 
 // cria uma lista e a iniciliza com elementos da lista l2
 list<int> l4(l2);
 
 cout << "Lista 4" << endl;
 for (it = l4.begin(); it != l4.end(); it++)
  cout << *it << " ";
 cout << endl;
  
 return 0;
}
