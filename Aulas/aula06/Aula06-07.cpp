//============================================================================
// Name        : Aula06-07.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <map>

using namespace std;

int main ()
{
	multimap<char, int> primeiro;

	//insere os pares
	primeiro.insert (pair<char, int> ('a', 10));
	primeiro.insert (pair<char, int> ('b', 15));

	//localiza a ocorrencia do elemento
	multimap<char, int>::iterator it = primeiro.find ('a');
	//primeiro.erase (it);

	for ( multimap<char, int>::const_iterator it = primeiro.begin (); it != primeiro.end (); ++it )
		cout << it->first << '\t' << it->second << endl;

	return 0;
}
