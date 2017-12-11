//============================================================================
// Name        : Aula11-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Fila de Prioridade
// C++ STL - Guia de Consulta Rapida - pp. 79
// pqconc01.cpp 
//****************************************************************************

#include <iostream>
#include <queue>     // Para queues e priority_queues

using namespace std;

int main()
{
 priority_queue<string,vector<string>,greater<string> > pq1;
 
 // Insere valores em pq1
 pq1.push("Tres");pq1.push("Dois");pq1.push("Um");
 
 cout << "Menor valor em pq1: " << pq1.top();
 
 // Cria pq2 com os elementos de pq1
 priority_queue<string,vector<string>,greater<string> > pq2(pq1);
 
 cout << "  Menor valor em pq2: " << pq2.top() << endl;
 
 return 0;
}
