//============================================================================
// Name        : Aula06-13.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 2) FILA DE PRIORIDADES (UFES)
//    http://www.cplusplus.com/reference/queue/priority_queue/push/
//****************************************************************************

#include <iostream>
#include <queue>

using namespace std;

int main ()
{
 priority_queue<int> fila_prioridade;

 cout << "Adicionando 30, 100, 25, 40" << endl;
 fila_prioridade.push(30);
 fila_prioridade.push(100);
 fila_prioridade.push(25);
 fila_prioridade.push(40);

 cout << "Removendo os elementos...";
 while ( !fila_prioridade.empty() )
 {
  cout << fila_prioridade.top() << ' ';
  fila_prioridade.pop();
 }

 cout << endl;

 return 0;
}
