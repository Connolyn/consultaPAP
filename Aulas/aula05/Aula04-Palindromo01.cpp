//============================================================================
// Name        : Aula04-Palindromo01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main()
{
 while ( true )
 {
  string frase;
  cout << "Por favor, digite uma frase (Enter - sair): ";
  getline( cin, frase );

  if ( frase.empty() )
   break;

  stack<char> pilha;
  queue<char> fila;

  for ( unsigned int i = 0; i < frase.length(); i++)
  {
   pilha.push(frase[i]);
   fila.push(frase[i]);
  }

  while ( !pilha.empty() && pilha.top() == fila.front() )
  {
   pilha.pop();
   fila.pop();
  }

  if ( pilha.empty() )
   cout << "A frase e um palindromo" << endl;
  else
   cout << "A frase nao e um palindromo" << endl;
 }

 return 0;
}
