#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main()
{
 while(cin.get() != EOF)	
 //while(!cin.eof())
 {
  string frase;
  cin >> frase;

  stack<char> pilha ( stack<char>::container_type( frase.begin(), frase.end() ) );
  queue<char> fila ( queue<char>::container_type( frase.begin(), frase.end() ) );
  
  while ( !pilha.empty() && pilha.top() == fila.front() )
  {
   pilha.pop();
   fila.pop();
  }

  cout << (pilha.empty() ? "Palindromo ": "Nao Palindromo") << endl;
 }
 
 return 0;
}
