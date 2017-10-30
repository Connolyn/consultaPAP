//============================================================================
// Name        : Aula09-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Forward Lists
// The C++ Standard Library - A Tutorial and Reference - 2nd Edition
// pp. 309 e 310
// cont/forwardlistsplice1.cpp
// cont/print.hpp
//****************************************************************************

#include <forward_list>
#include "print.hpp"

using namespace std;

int main()
{
 forward_list<int> lista1 = { 1, 2, 3, 4, 5 };
 forward_list<int> lista2 = { 97, 98, 99 };
 
 PRINT_ELEMENTS(lista1, "Lista 01 inicial: ");
 PRINT_ELEMENTS(lista2, "Lista 02 inicial: ");
   
 // encontrar 3 in lista1
 auto posicaoLista1 = lista1.before_begin();
 for ( auto pb1 = lista1.begin(); pb1 != lista1.end(); ++pb1, ++posicaoLista1 )
 {
  if (*pb1 == 3) 
   break;  // encontrado
 }
    
 // encontrar 99 in lista2
 auto posicaoLista2 = lista2.before_begin();
 for (auto pb2 = lista2.begin(); pb2 != lista2.end(); ++pb2, ++posicaoLista2 )
 {
  if (*pb2 == 99)
   break;  // encontrado
 }

 // une o elemento com o valor 3 da lista1 para lista2 
 // antes do elemento com o valor 99
 lista1.splice_after(posicaoLista2, lista2,  // destino
                     posicaoLista1);     // origem

 PRINT_ELEMENTS(lista1, "Lista 01: ");
 PRINT_ELEMENTS(lista2, "Lista 02: ");
 
 return 0;
}