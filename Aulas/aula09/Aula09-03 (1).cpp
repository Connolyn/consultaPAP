//============================================================================
// Name        : Aula09-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Forward Lists
// The C++ Standard Library - A Tutorial and Reference - 2nd Edition
// pp. 307
// cont/forwardlistfind1.cpp
// cont/print.hpp
//****************************************************************************

#include <forward_list>
#include "print.hpp"

using namespace std;

int main()
{
 forward_list<int> lista = { 1, 2, 3, 4, 5, 97, 98, 99 };
 
 PRINT_ELEMENTS(lista, "Lista Encadeada simples: ");

 // encontrar a posicao antes do primeiro elemento par
 auto posBefore = lista.before_begin();
 for (auto pos = lista.begin(); pos != lista.end(); ++pos, ++posBefore)
 {
  if (*pos % 2 == 0)
   break;  // elemento encontrado
 }

 // e inserir um novo elemento na frente do primeiro elemento par
 lista.insert_after(posBefore, 42);
 
 PRINT_ELEMENTS(lista, "Lista encadeada final: ");
 
 return 0;
}