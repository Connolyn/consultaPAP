//============================================================================
// Name        : Aula04-Fila-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 4) FILAS (UFES)
// http://www.cplusplus.com/reference/queue/queue/push/
//****************************************************************************

#include <iostream>
#include <queue>

using namespace std;

int main()
{
 queue<int> fila;
 int numero;

 cout << "Digite alguns inteiros (0 para parar):" << endl;
 do
 {
  cin >> numero;
  fila.push(numero);
 } while ( numero );

 cout << "A fila contem: ";
 while ( !fila.empty() )
 {
  cout << ' ' << fila.front();
  fila.pop();
 }

 cout << endl;

 return 0;
}
