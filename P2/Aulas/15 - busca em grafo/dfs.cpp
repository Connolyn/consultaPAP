//============================================================================
// Name        : bfs.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// BUSCA EM PROFUNDIDADE (DFS - Depth-First Search)
// http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/
// http://www.geeksforgeeks.org/iterative-depth-first-traversal/
//****************************************************************************

#include <iostream>
#include <list>
#include <vector>
#include <stack>
 
using namespace std;
 
// Classe que representa um grafo direcionado
class Grafo
{
 int V;    		  // numero de vertices
 list<int> *adj;  // ponteiro para um vetor com as listas de adjacencias

 public:
  // construtor
  Grafo(int V);  		
  // metodo para adicionar uma aresta direcionada ao grafo
  void adicionaArestaDirecionada(int v, int w); 
  // metodo para adicionar uma aresta nao direcionada ao grafo
  void adicionaArestaNaoDirecionada(int v, int w); 
  // imprime os vertices visitados pela DFS
  void DFS(int s);  				
};
 
Grafo::Grafo(int V)
{
 this->V = V;
 adj = new list<int>[V];
}

void Grafo::adicionaArestaDirecionada(int v, int w)
{
 // adiciona w na lista do v	
 adj[v].push_back(w); 
}

void Grafo::adicionaArestaNaoDirecionada(int v, int w)
{
 // adiciona w na lista do v	
 adj[v].push_back(w); 
 // e vice-versa
 adj[w].push_back(v); 
}
 
void Grafo::DFS(int s)
{ 
 // marca todos os vertices como nao visitados	
 vector<bool> visitados(V, false);
 
 // cria uma pilha para a DFS
 stack<int> pilha;

 // empilha o vertice atual
 pilha.push(s);
 
 while ( !pilha.empty() )
 {
  // desempilha um vertice
  s = pilha.top();
  pilha.pop();
 
  // pilha nao pode conter o mesmo vertice duas vezes
  if ( !visitados[s] )
  {
   cout << s << " ";
   visitados[s] = true;
  }
 
  // obtem todos os vertices adjacentes do vertice s
  // se um vizinho ainda nao foi visitado, entao marca como visitado
  // e empilha
  for ( list<int>::iterator i = adj[s].begin(); i != adj[s].end(); ++i )
   if ( !visitados[*i] )
    pilha.push(*i);
 } 
}
	
int main()
{
 // cria grafo g1
 Grafo g1(7);

 g1.adicionaArestaNaoDirecionada(0, 1);
 g1.adicionaArestaNaoDirecionada(0, 2);
 g1.adicionaArestaNaoDirecionada(1, 2);
 g1.adicionaArestaNaoDirecionada(2, 3);
 g1.adicionaArestaNaoDirecionada(2, 4);
 g1.adicionaArestaNaoDirecionada(2, 5);
 g1.adicionaArestaNaoDirecionada(2, 6);
 g1.adicionaArestaNaoDirecionada(3, 4);

 cout << "Comecando pelo vertice 0" << endl;
 g1.DFS(0);

 // cria grafo g2
 Grafo g2(7);

 g2.adicionaArestaNaoDirecionada(0, 1);
 g2.adicionaArestaNaoDirecionada(0, 2);
 g2.adicionaArestaNaoDirecionada(0, 3);
 g2.adicionaArestaNaoDirecionada(1, 2);
 g2.adicionaArestaNaoDirecionada(1, 4);
 g2.adicionaArestaNaoDirecionada(1, 6);
 g2.adicionaArestaNaoDirecionada(2, 3);
 g2.adicionaArestaNaoDirecionada(2, 5);

 cout << endl << endl << "Comecando pelo vertice 3" << endl;
 g2.DFS(3);

 cout << endl;

 return 0;
}