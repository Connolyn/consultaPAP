//============================================================================
// Name        : Aula09-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Forward Lists
// The C++ Standard Library - A Tutorial and Reference - 2nd Edition
// pp. 312 e 313
// cont/forwardlist1.cpp
//****************************************************************************

#include <forward_list>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

void exibirListas (const string& s, const forward_list<int>& l1,
                                    const forward_list<int>& l2)
{
 cout << s << endl;
 cout << "Lista 01: ";
 copy (l1.cbegin(), l1.cend(), ostream_iterator<int>(cout," "));
 cout << endl << "Lista 02: ";
 copy (l2.cbegin(), l2.cend(), ostream_iterator<int>(cout," "));
 cout << endl << endl;
}

int main()
{
 forward_list<int> lista1 = { 1, 2, 3, 4 };
 forward_list<int> lista2 = { 77, 88, 99 };
 
 exibirListas("Inicial:", lista1, lista2);

 // insere 6 novos elementos no inicio da lista 2
 lista2.insert_after( lista2.before_begin(), 99);
 lista2.push_front( 10 );
 lista2.insert_after( lista2.before_begin(), {10, 11, 12, 13} );
 exibirListas("6 novos elementos na Lista 02:", lista1, lista2);

 // insere todos os elementos da lista2 no inicio da lista1
 lista1.insert_after( lista1.before_begin(), lista2.begin(), lista2.end() );
 exibirListas("Lista 02 em Lista 01:", lista1, lista2);

 // elimina segundo elemento e elementos depois do elemento com o valor 77
 lista2.erase_after(lista2.begin());
 lista2.erase_after(find(lista2.begin(), lista2.end(), 77), lista2.end());
 exibirListas("Lista 02 - elimina segundo elemento e depois elementos depois de 77:", lista1, lista2);

 // ordena lista1, atribui para lista2 e remove elementos duplicados
 lista1.sort();
 lista2 = lista1;
 lista2.unique();
 exibirListas("Lista 02 - ordenada e unica:", lista1, lista2);

 // intercala ambas as listas ordenadas em lista1
 lista1.merge(lista2);
 exibirListas("Lista 01 Intercalada:", lista1, lista2);
 
 return 0;
}