#include <iostream>
#include <stack>

using namespace std;

typedef struct 
{
	char id;
	int numero;
	
}item;


int main ()
{

	stack<item> pilha;


	item a; 
	a.id = 'A';
	a.numero = 17;


	item b; 
	b.id = 'B';
	b.numero = 13;

	pilha.push(a);
	pilha.push(b);


	 cout << "Removendo os itens..." << endl;
	 while ( !pilha.empty() )
	 {
	  cout << ' ' << pilha.top().id << '=' << pilha.top().numero << endl;
	  pilha.pop();
	 }
 
	 cout << endl;

	 return 0;
}
