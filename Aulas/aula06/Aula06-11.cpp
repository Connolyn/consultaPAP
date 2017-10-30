//============================================================================
// Name        : Aula06-11
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 1) CONJUNTOS (UFES)
//    http://www.cplusplus.com/reference/set/set/insert/
//****************************************************************************

#include <iostream>
#include <set>

using namespace std;

int main ()
{
 set< int > conjunto;
 set< int >::iterator it;
 pair< set<int>::iterator, bool > ret;

 // adicionando alguns valores
 for ( int i = 1; i <= 5; ++i )
  conjunto.insert( i * 10 );

 // nenhum novo elemento inserido
 ret = conjunto.insert( 20 );

 if ( ret.second == false )
  it = ret.first;  // "it" agora aponta para "20"

 // inserindo apos o ponteiro
 conjunto.insert( it, 25 ); // inserção de eficiência máxima
 conjunto.insert( it, 24 ); // inserção de eficiência máxima
 conjunto.insert( it, 26 ); // não inserção de eficiência máxima

 // 10 ja existe, nao eh inserido
 int inteiros[] = { 5, 10, 15 };
 // inicio - fim
 conjunto.insert ( inteiros  , inteiros + 3 );

 cout << "O conjunto contem:";
 for ( it = conjunto.begin(); it != conjunto.end(); ++it )
  cout << ' ' << *it;

 cout << endl;

 return 0;
}
