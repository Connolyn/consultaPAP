//============================================================================
// Name        : Aula06-12.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 2) DICIONARIO (UFES)
//    http://www.cplusplus.com/reference/map/map/insert/
//****************************************************************************

#include <iostream>
#include <map>

using namespace std;

int main ()
{
 map< char,int > dicionario;

 dicionario.insert ( pair< char, int >('a', 100) );
 dicionario.insert ( pair< char, int >('z', 200) );

  // simplesmente inserindo no dicionario
  pair< map<char, int>::iterator, bool > ret;
  ret = dicionario.insert ( pair< char, int >('z',500) );
  if (ret.second == false)
  {
   cout << "O item 'z' ja existe com o valor de " << ret.first->second << endl;
  }

  // inserindo em uma posicao especifica
  map<char,int>::iterator it = dicionario.begin();
  dicionario.insert (it, pair<char,int>('b', 300));
  dicionario.insert (it, pair<char,int>('c', 400));

  // inserindo em outro dicionado, pegando uma faixa de itens:
  map<char,int> dicionario2;
  dicionario2.insert(dicionario.begin(), dicionario.find('c'));

  // mostrando o conteudo:
  cout << "Dicionario contem:" << endl;
  for ( it = dicionario.begin(); it != dicionario.end(); it++ )
   cout << it->first << " => " << it->second << endl;

  cout << "Dicionario2 contem:" << endl;
  for ( it = dicionario2.begin(); it != dicionario2.end(); it++ )
   cout << it->first << " => " << it->second << endl;

 return 0;
}
