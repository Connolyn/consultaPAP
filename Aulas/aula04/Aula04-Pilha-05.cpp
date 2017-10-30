//============================================================================
// Name        : Aula04-Pilha-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/stack/stack/size/
//****************************************************************************

#include <iostream>
#include <stack>

using namespace std;

int main()
{
 stack<int> pilha;

 cout << "0. size: " << pilha.size() << endl;

 for ( int i = 0; i < 5; i++ )
  pilha.push(i);

 cout << "1. size: " << pilha.size() << endl;

 pilha.pop();
 cout << "2. size: " << pilha.size() << endl;

 return 0;
}
