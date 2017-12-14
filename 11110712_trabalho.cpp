#include<iostream>
#include <list>
 
using namespace std;
 
// classe que representa um grafo direcionado
class Grafo
{
 int V;         // numero de vertices
 list<int> *adj;  // ponteiro para um vetor com as listas de adjacencias
 
 public:
  // construtor 
  Grafo(int V);                                 
  // metodo para adicionar uma aresta direcionada ao grafo
  void adicionaArestaDirecionada(int v, int w);    
  // metodo para adicionar uma aresta nao direcionada ao grafo
  void adicionaArestaNaoDirecionada(int v, int w); 
  // imprime o primeiro vertice visitados pela BFS marcado como saida no vetor saidas
  void BFS(int s, bool *saidas);          
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
 
void Grafo::BFS(int s, bool *saidas)
{

 bool *visitado = new bool[V];
 int *distancia = new int[V];

 // marca todos os vertices como nao visitados
 for ( int i = 0; i < V; i++ )
  visitado[i] = false;
 
 // cria uma fila para a BFS
 list<int> fila;
 
 // marca o vertice atual como visitado e enfileira
 visitado[s] = true;
 //define a distancia do vertice inical como zero
 distancia[s] = 0;

 fila.push_back(s);
 
 // 'i' sera utilizado para obtermos todos os vizinhos de um vertice
 list<int>::iterator i;
 
 while ( !fila.empty() )
 {
  // desenfileira um vertice 
  s = fila.front();
 // cout << s << "  d= " << distancia[s] << endl;
  fila.pop_front();
 
  // obtem todos os vizinhos do vertice s
  // se um vizinho ainda nao foi visitado, entao marca como visitado
  // e enfileira
  for( i = adj[s].begin(); i != adj[s].end(); ++i )
  {
   if ( !visitado[*i] )
   {
    visitado[*i] = true;

    //A distancia desse vertice será a distancia do vertice S + 1
    distancia[*i] = distancia[s] + 1;

    //Se for uma saida, impreme a distancia e retorna vazio
    if(saidas[*i]){
      cout<<distancia[*i]<<endl;
      return;
    }

    fila.push_back(*i);
   }
  }
 }
 
}
 
//converte coordenadas da matriz em uma numeracao conforme o exemplo:
/* 
00 01 02 03 04
05 06 07 08 09
10 11 12 13 14
*/  
int converte(int i, int j, int m)
{
    return i*(m) + j;
}

int main()
{
  int n, m, s=0;

  //le a entrada n m
  cin>>n >> m; 

  //labirinto em forma de matriz 
  int lab[n][m];
  //Saidas em forma de  vetor
  bool saidas [n*m];

  //le a estrutura do labirinto 
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin>> lab[i][j];
      //localiza o inicio 
      if(lab[i][j] == 3) s = converte(i, j, m);
      //localiza as saidas
      saidas[converte(i,j,m)] = lab[i][j] == 0 ; 

    }
  }


 // cria um grafo
  Grafo g(n*m);

  //Adiciona as aretas
  for (int i = 0; i < n-1; ++i)
  {
    for (int j = 0; j < m-1; ++j)
    {

      //Se esse no nao for dois
      if(lab[i][j]!=2)
      {

        //se o no abaixo nao for dois
        if(lab[i+1][j] !=2)
        {
          g.adicionaArestaNaoDirecionada(
            converte(i,j,m),
            converte(i+1,j,m)
            );

        }

        //se o no ao lado nao for dois
        if(lab[i][j+1] !=2)
        {

          g.adicionaArestaNaoDirecionada(
            converte(i,j,m),
            converte(i,j+1,m)
            );
        }     
      }
    }
  }


  //adiciona vertices do lado direito
  for (int i = 0; i < n-1; ++i)
  {
    //se
    if(lab[i][m-1] !=2 && lab[i+1][m-1] !=2 )
      g.adicionaArestaNaoDirecionada(
        converte(i,m-1,m),
        converte(i+1,m-1,m)
      );
  }

  //adiciona vertices do lado inferior
  for (int j = 0; j < m-1; ++j)
  {
    if(lab[n-1][j] !=2 && lab[n-1][j+1] !=2 )
      g.adicionaArestaNaoDirecionada(
        converte(n-1,j,m),
        converte(n-1,j+1,m)
      );
  }  

  //chama a busca 
  g.BFS(s, saidas);

  
 return 0;
}
