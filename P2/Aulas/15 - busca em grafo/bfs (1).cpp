//============================================================================
// Name        : bfs.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// BUSCA EM LARGURA (BFS - Breadth-First Search)
// http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/
//****************************************************************************

#include <iostream>
#include <list>
 
using namespace std;
 
// classe que representa um grafo direcionado
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
  // imprime os vertices visitados pela BFS
  void BFS(int s);  				
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
 
void Grafo::BFS(int s)
{
 // marca todos os vertices como nao visitados
 bool *visitados = new bool[V];
 for ( int i = 0; i < V; i++ )
  visitados[i] = false;
 
 // cria uma fila para a BFS
 list<int> fila;
 
 // marca o vertice atual como visitado e enfileira
 visitados[s] = true;
 fila.push_back(s);
  
 while ( !fila.empty() )
 {
  // desenfileira um vertice e imprime
  s = fila.front();
  cout << s << " ";
  fila.pop_front();
 
  // obtem todos os vizinhos do vertice s
  // se um vizinho ainda nao foi visitado, entao marca como visitado
  // e enfileira
  for( list<int>::iterator i = adj[s].begin(); i != adj[s].end(); ++i )
  {
   if ( !visitados[*i] )
   {
    visitados[*i] = true;
    fila.push_back(*i);
   }
  }
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
 g1.BFS(0);
 
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
 g2.BFS(3);
 
 cout << endl;
 
 return 0;
}