//============================================================================
// Name        : Aula09-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lists
// The C++ Standard Library - A Tutorial and Reference - 2nd Edition
// pp. 298 e 299
// cont/list1.cpp
//****************************************************************************

#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void exibirListas (const list<int>& l1, const list<int>& l2)
{
 cout << "Lista 01: ";
 copy (l1.cbegin(), l1.cend(), ostream_iterator<int>(cout," "));
 cout << endl << "Lista 02: ";
 copy (l2.cbegin(), l2.cend(), ostream_iterator<int>(cout," "));
 cout << endl << endl;
}

int main()
{
 list<int> lista1, lista2;

 for ( int i = 0; i < 6; ++i )
 {
  lista1.push_back(i);
  lista2.push_front(i);
 }
 
 cout << "Teste 1" << endl;
 exibirListas(lista1, lista2);

 // insere todos os elementos da lista1 antes do primeiro elemento com o 
 // valor 3 da lista 2
 // find() - retorna um iterador para o primeiro elemento com o valor 3
 lista2.splice(find(lista2.begin(), lista2.end(), 3), lista1);
 
 cout << "Teste 2" << endl;
 exibirListas(lista1, lista2);

 // move o primeiro elemento da lista2 para o fim
 lista2.splice(lista2.end(),        // posicao de destino
               lista2,              // lista origem
               lista2.begin());     // posicao da origem
               
 cout << "Teste 3" << endl;              
 exibirListas(lista1, lista2);

 // ordena a segunda lista, atribui a lista 1 e remove elementos duplicados
 lista2.sort();
 lista1 = lista2;
 lista2.unique();
 
 cout << "Teste 4" << endl;
 exibirListas(lista1, lista2);

 // intercala as duas listas na lista1 - lista2 fica vazia
 lista1.merge(lista2);
 
 cout << "Teste 5" << endl;
 exibirListas(lista1, lista2);

 return 0;
}