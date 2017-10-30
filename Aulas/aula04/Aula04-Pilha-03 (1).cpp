//============================================================================
// Name        : Aula04-Pilha-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/stack/stack/push/
//****************************************************************************

#include <iostream>
#include <stack>

using namespace std;

int main ()
{
 stack<int> pilha;

 for ( int i = 0; i < 5; ++i )
  pilha.push(i);

 cout << "Removendo os itens...";
 while ( !pilha.empty() )
 {
  cout << ' ' << pilha.top();
  pilha.pop();
 }

 cout << endl;

 return 0;
}
