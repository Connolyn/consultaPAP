//============================================================================
// Name        : Aula04-Palindromo-Matheus.cpp
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

	/* Leitura */
	while (true)
	{
		int el;
		cin >> el;
		if (!el)
			break;

		pilha.push (el);
		fila.push (el);
	}

	while (!fila.empty ())
	{
		if (fila.front () == pilha.top ())
		{
			pilha.pop ();
		}
		fila.pop ();
	}

	/* resultado */
	cout << (pilha.empty () ? "Palindromo " : "Nao Palindromo") << endl;

	return 0;
}