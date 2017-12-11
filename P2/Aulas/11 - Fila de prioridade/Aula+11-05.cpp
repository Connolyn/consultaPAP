//============================================================================
// Name        : Aula11-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Fila de Prioridade
// C++ STL - Guia de Consulta Rapida - pp. 80
// pqempty1.cpp 
//****************************************************************************

#include <iostream>
#include <queue>     // Para queues e priority_queues

using namespace std;

int main()
{
 // Fila com prioridade que usa o functor less<>
 priority_queue<int> pq1;
 
 pq1.push(30);pq1.push(20);pq1.push(10);
 
 cout << "Qtde. de elementos depois de push(): "
      << pq1.size() << endl;
      
 while (pq1.empty() == false) // Remove os elementos
 { 
  cout << "Elemento eliminado:  " << pq1.top() << endl;
   pq1.pop();
 }
 
 cout << "Qtde. de elementos depois de pop():  "
      << pq1.size() << endl;
      
 return 0;
}
