//============================================================================
// Name        : Aula06-10.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <queue> // definicao do adaptador priority_queue

using namespace std;

int main ()
{
	priority_queue<double> prioridades; // cria priority_queue

	// insere elementos em prioridades
	prioridades.push (3.2);
	prioridades.push (9.8);
	prioridades.push (5.4);

	// remove elemento de priority_queue
	while ( !prioridades.empty () )
		{
			cout << prioridades.top () << ' '; // visualiza elemento superior
			prioridades.pop (); // remove elemento superior
		}

	cout << endl;

	return 0;
}
