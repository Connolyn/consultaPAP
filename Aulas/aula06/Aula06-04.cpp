//============================================================================
// Name        : Aula06-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <deque>

using namespace std;

int main ()
{
	deque<int> primeiro;              // deque vazio do tipo int
	deque<int> segundo (4, 100);     // quatro inteiros com o valor 100
	deque<int> terceiro (segundo.begin (), segundo.end ());  // itera pelo segundo
	deque<int> quarto (terceiro);     // construtor cópia

	// o construtor iterador também pode ser utilizado com arrays
	int inteiros[] =		{ 16, 2, 77, 29 };
	deque<int> quinto (inteiros, inteiros + sizeof(inteiros) / sizeof(int));

	primeiro.push_front (2);
	primeiro.push_front (3);

	primeiro.push_back (1);

	// modifica elemento na localizacao 1 - comeca em 0
	primeiro[1] = 5;

primeiro.pop_front (); // remove o primeiro elemento

	cout << "O conteudo eh:";
	for ( unsigned int i = 0; i < primeiro.size (); i++ )
		cout << " " << primeiro[i];

	return 0;
}
