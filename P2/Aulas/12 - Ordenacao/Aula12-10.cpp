//============================================================================
// Name        : Aula12-10.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Operacoes de Comparacao e Pesquisa - upper_bound
// C++ STL - Guia de Consulta Rapida - pp. 122
// ubound01.cpp - determina a posicao onde um dado valor pode ser inserido
//****************************************************************************

/*
 upper_bound(first, last, valor)
 
 determina onde "valor" esta no intervalo [first, last]
 
 se o valor nao estiver no intervalo, o iterador retornado apontara para a
 ultima posicao onde "valor" poderia ser inserido sem alterar a ordenacao
 do intervalo
 
 se "valor" estiver no intervalo, o iterador retornado apontara para a 
 ocorrencia 'past-the-end' de valor no intervalo
*/

#include <iostream>
#include <vector>     
#include <algorithm>  

using namespace std;

int main()
{
 int valor = 110;
 vector<int> v1(5);
 vector<int>::iterator it;
   
 v1[0] = 1;
 v1[1] = 7; 
 v1[2] = 11; 
 v1[3] = 15; 
 v1[4] = 19;
 
 cout << "Vetor: ";
 for ( int i = 0; i < 5; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 it = upper_bound(v1.begin(),v1.end(),valor);
 
 cout << "Primeira posicao onde " << valor
      << " pode ser inserido: " << (it - v1.begin()) << endl;
 cout << "Valor apontado pelo iterador: " << *it << endl;
 
 return 0;
}