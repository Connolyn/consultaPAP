//============================================================================
// Name        : Aula11-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Fila de Prioridade
// C++ STL - Guia de Consulta Rapida - pp. 78 a 79
// pqcria01.cpp - cria filas com prioridade com base nos containers associados
//****************************************************************************

/*
 A classe-template priority_queue eh uma classe adaptadora para os containers
 sequenciais vetor e deque. Assim, uma fila de prioridade pode ser 
 implementada a partir destes containers. 
 
 Por default, eh implementada a partir de um vetor.

 Tem a seguinte caracteristica: o elemento disponivel para remocao eh o de maior
 valor (maior prioridade), segundo algum criterio de ordenacao dos elementos,
 por meio de um functor de comparacao. A insercao de elementos ocorre em um 
 extremo e a remocao em outro.
 
 O functor de comparacao less<> eh o default, por isso foi omitido em alguns
 casos
 
 Com o functor less<>, o elemento disponivel sera o de maior valor e com
 o functor greater<>, o de menor valor 
 
 O functor de comparacao eh utilizado para ordenar os elementos
*/

#include <iostream>
#include <queue>    // Para queues e priority_queues
#include <deque>    // Para containers deque

using namespace std;

int main()
{
 // Fila implementada em um vetor. Usa o functor less<>
 priority_queue<int> pq1;
 
 // Fila implementada em  um vetor. Usa o functor less<>
 priority_queue<int,vector<int> > pq2;
 
 // Fila implementada em um vetor. Usa o functor less<>
 priority_queue<int,vector<int>,less<int> > pq3;
 
 // Fila implementada em um vetor. Usa o functor greater<>
 priority_queue<int,vector<int>,greater<int> > pq4;
 
 // Fila implementada em uma deque. Usa o functor less<>
 priority_queue<char,deque<char> > pq5;
 
 // Fila implementada em uma deque. Usa o functor less<>
 priority_queue<char,deque<char>,less<char> > pq6;
 
 // Fila implementada em uma deque. Usa o functor greater<>
 priority_queue<char,deque<char>,greater<char> > pq7;
 
 return 0;
}