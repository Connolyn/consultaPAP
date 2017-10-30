//============================================================================
// Name        : Aula04-Pilha-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 5) PILHAS (UFES)
//****************************************************************************

#include <iostream>
#include <stack>

using namespace std;

int main()
{
 stack<int> pilha;

 cout << "Adicionando 17, 32 e 79 na pilha..." << endl;
 pilha.push(17);
 pilha.push(32);
 pilha.push(79);

 while (!pilha.empty())
 {
  cout << "Tamanho da Pilha: " << pilha.size() << endl << " Removendo item: " << pilha.top() << endl;

  //removendo o item do topo - nao retorna o elemento removido
  pilha.pop();
 }

 return 0;
}
