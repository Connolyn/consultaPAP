//============================================================================
// Name        : Aula04-Pilha-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/stack/stack/top/
//****************************************************************************

#include <iostream>
#include <stack>

using namespace std;

int main()
{
 stack<int> pilha;

 pilha.push(10);
 pilha.push(20);

 pilha.top() -= 5;

 cout << "mystack.top() is now " << pilha.top() << endl;

 return 0;
}
