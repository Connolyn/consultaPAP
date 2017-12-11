//============================================================================
// Name        : Aula11-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Fila de Prioridade
// C++ STL - Guia de Consulta Rapida - pp. 80
// pqopeq.cpp 
//****************************************************************************


#include <iostream>
#include <queue>     // Para queues e priority_queues

using namespace std;

int main()
{
 // Filas com prioridade que usam o functor less<>
 priority_queue<int> pq1, pq2;
 
 for (int i = 0;i < 4;++i) // Insere 0 1 2 3 em pq1
  pq1.push(i);

 for (int i = 0;i < 3;++i) // Insere 0 1 2 em pq2
  pq2.push(i);

 cout << "Elementos em pq2 antes da substituicaoo:  "
      << pq2.size() << endl;
      
 pq2 = pq1;                // Substituicao
 
 cout << "Elementos em pq2 depois da substitucao: "
      << pq2.size() << endl;
      
 return 0;
}
