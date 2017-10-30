//============================================================================
// Name        : Aula06-09.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <queue> // definicao da classe queue adaptadora

using namespace std;

int main ()
{
	queue<double> valores; // fila com doubles

	// insere elementos nos valores de fila
	valores.push (3.2);
	valores.push (9.8);
	valores.push (5.4);

	// remove elementos da fila
	while ( !valores.empty ( ))
		{
			cout << valores.front () << ' '; // visualiza elemento da frente
			valores.pop (); // remove o elemento
		}

	cout << endl;

	return 0;
}
