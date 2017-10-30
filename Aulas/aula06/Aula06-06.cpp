//============================================================================
// Name        : Aula06-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <map>

using namespace std;

int main ()
{
	map<char, int> primeiro;

	//atribuicao direta
	primeiro['a'] = 10;
	primeiro['b'] = 30;
	primeiro['c'] = 50;
	primeiro['d'] = 70;

	map<char, int> segundo (primeiro.begin (), primeiro.end ()); //construtor iterador
	map<char, int> terceiro (segundo); //construtor copia

	//localiza a ocorrencia do elemento
	multimap<char, int>::iterator it = primeiro.find ('a');

	//imprime o par
	cout << it->first << '\t' << it->second << endl << endl;

	//imprime os pares do mapa
	for (map<char, int>::const_iterator it = primeiro.begin (); it != primeiro.end (); ++it )
		cout << it->first << '\t' << it->second << endl;

	return 0;
}
