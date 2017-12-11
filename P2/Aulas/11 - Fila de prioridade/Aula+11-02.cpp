//============================================================================
// Name        : Aula11-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Fila de Prioridade
// C++ STL - Guia de Consulta Rapida - pp. 79
// pqint01.cpp 
//****************************************************************************

#include <iostream>
#include <queue>     // Para queues e priority_queues
#include <deque>     // Para containers deque
#include <string>    // Para objetos string

using namespace std;

int main()
{
 deque<string> d1(3);
 
 d1[0] = "Campinas";d1[1] = "Sorocaba";d1[2] = "Itatiba";
 
 priority_queue<string> pq1(d1.begin(),d1.end());
 
 cout << "Maior valor : " << pq1.top() << endl;
 
 return 0;
}