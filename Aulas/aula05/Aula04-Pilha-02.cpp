//============================================================================
// Name        : Aula04-Pilha-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 6) PILHAS 2 (UFES)
//****************************************************************************

#include <iostream>
#include <stack>

using namespace std;

typedef struct
{
 char id;
 int numero;
} item;

int main()
{
 stack<item> pilha;

 item a;
 cout << "Adicionando {'A',17} e {'B', 32} na pilha..." << endl;

 a.id = 'A';
 a.numero = 17;
 pilha.push(a);

 a.id = 'B';
 a.numero = 32;
 pilha.push(a);

 while ( !pilha.empty() )
 {
  cout << "Tamanho da Pilha: " << pilha.size() << endl << " Removendo item: "
	   << pilha.top().id << ' ' << pilha.top().numero << endl;

  //removendo o item do topo
  pilha.pop();
 }

 return 0;
}
