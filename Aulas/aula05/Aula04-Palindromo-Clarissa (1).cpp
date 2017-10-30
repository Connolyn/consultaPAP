//============================================================================
// Name        : Aula04-Palindromo-Clarissa.cpp
//============================================================================

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int
main ()
{
	stack<int> pilha;
	queue<int> fila;
	int numero, flag = 1;

	while (cin >> numero && numero)
	{
		pilha.push (numero);
		fila.push (numero);
	}

	for (unsigned int i = 0; i < pilha.size () / 2; i++)
	{
		if (pilha.top () != fila.front ())
			flag = 0;

		 pilha.pop ();
			fila.pop ();
	}

	if (flag == 1)
		cout << "Palindromo!" << endl;
	else
		cout << "Nao eh palindromo!" << endl;

	return 0;
}
