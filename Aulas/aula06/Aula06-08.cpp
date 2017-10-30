//============================================================================
// Name        : Aula06-08.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <stack> // definicao de stack adapter
#include <vector> // definicao da template de classe vector
#include <list> // definicao da template de classe list

using namespace std;

int main ()
{
	// pilha com deque subjacente padrao
	stack<int> intDequeStack;

	// pilha com vetor subjacente
	stack<int, std::vector<int> > intVectorStack;

	// pilha com lista subjacente
	stack<int, std::list<int> > intListStack;

	// insere os valores em cada pilha
	intDequeStack.push (1);
	intVectorStack.push (1);
	intListStack.push (1);

	// remove elementos de cada pilha
	intDequeStack.pop ();
	intVectorStack.pop ();
	intListStack.pop ();

	return 0;
}
