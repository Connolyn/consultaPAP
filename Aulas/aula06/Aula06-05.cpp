//============================================================================
// Name        : Aula06-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <set>

using namespace std;

int main ()
{
	set<int> primeiro; //conjunto vazio de inteiros
	int inteiros[] =	{ 10, 20, 30, 40, 50 };
	set<int> segundo (inteiros, inteiros + 5); // ponteiros como iteradores
	set<int> terceiro (segundo);  //construtor cópia

	primeiro.insert (10);
	cout << primeiro.erase (40) << endl;

	set<int>::iterator it = primeiro.find (40);
	primeiro.swap (segundo);

	for ( it = primeiro.begin (); it != primeiro.end (); it++ )
		cout << *it << " ";

	cout << endl;

	return 0;
}
