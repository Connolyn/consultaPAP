//============================================================================
// Name        : Aula06-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> primeiro; // vector de ints vazio
	vector<int> segundo (4, 100); // quatro inteiros de valor 100
	vector<int> terceiro (segundo.begin (), segundo.end ()); // copia segundo vetor
	vector<int> quarto (terceiro); // copia o terceiro vector

	// o construtor iterador também pode ser utilizado com arrays
	int inteiros[] =		{ 16, 2, 77, 29 };

	vector<int> quinto (inteiros, inteiros + sizeof(inteiros) / sizeof(int));
	cout << "O tamanho do quinto é:" << quinto.size () << endl;

	primeiro.push_back (3);
	primeiro.pop_back ();

	//iterador somente leitura
	vector<int>::const_iterator it;

	// exibe elementos vector utilizando const_iterator
	for (it = quinto.begin (); it != quinto.end (); ++it)
		cout << *it << ' ';

	return 0;
}
