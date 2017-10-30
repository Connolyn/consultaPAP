#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	string palavra;
	cin >> palavra;

 	stack<char> pilha ( stack<char>::container_type( palavra.begin(), palavra.end() ));
 	queue<char> fila ( queue<char>::container_type( palavra.begin(), palavra.end() ));


	while( !fila.empty() && fila.front() == pilha.top()){
		pilha.pop();
		fila.pop();
	}

	cout<< (pilha.empty()? "Palindromo ": "Nao Palindromo") << endl;
	
	return 0;
}