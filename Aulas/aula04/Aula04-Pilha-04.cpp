//============================================================================
// Name        : Aula04-Pilha-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/stack/stack/empty/
//****************************************************************************

#include <iostream>
#include <stack>

using namespace std;

int main ()
{
 stack<int> pilha;
 int soma (0); // int soma = 0;

 for ( int i = 1; i <= 10; i++)
  pilha.push(i);

 while ( !pilha.empty() )
 {
  soma += pilha.top();
  pilha.pop();
 }

 cout << "Total: " << soma << endl;

 return 0;
}
