//============================================================================
// Name        : Aula12-08.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Operacoes de Comparacao e Pesquisa - equal_range
// C++ STL - Guia de Consulta Rapida - pp. 121
// equalr01.cpp - determina a posicao onde um dado valor pode ser inserido
//****************************************************************************

/*
  equal_range(first, last, valor)
 
  Determina onde "valor" esta no intervalo [first, last]
  Retorna um par de iteradores, em que estes seriam os iteradores
  retornados pelos algoritmos lower_bound e upper_bound
  
  Se "valor" nao estiver no intervalo, o primeiro membro deste par (first)
  apontara para a primeira posicao onde valor poderia ser inserido sem alterar
  a ordenacao do intervalo; o segundo membro (second) apontara para a ultima
  posicao onde "valor" poderia ser inserido sem alterar a ordenacao do
  intervalo 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
 int valor = 10; 
 vector<int> v1(5);
 
 v1[0] = 1;
 v1[1] = 7; 
 v1[2] = 11; 
 v1[3] = 15; 
 v1[4] = 19;
 
 // par de iteradores
 pair<vector<int>::iterator,vector<int>::iterator> resultado;
 
 cout << "Vetor: ";
 for ( int i = 0; i < 5; i++ )
  cout << v1[i] << " ";
 cout << endl;
 
 resultado = equal_range(v1.begin(),v1.end(), valor);
 
 cout << "Primeira posicao onde " << valor
      << " pode ser inserido: " << (resultado.first - v1.begin()) << endl;
 cout << "Valor apontado por first:  " << *resultado.first << endl;
 cout << "Ultima posicao onde " << valor
      << " pode ser inserido:   " << (resultado.second - v1.begin()) << endl;
 cout << "Valor apontado por second: " << *resultado.second << endl;
 
 return 0;
}