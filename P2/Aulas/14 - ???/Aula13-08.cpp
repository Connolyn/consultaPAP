//============================================================================
// Name        : Aula13-08.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/is_sorted/
//****************************************************************************

// is_sorted example

/*
 permutacao - alteracao dos elementos que formam um todo, 
 a fim de se obter nova combinacao.
*/

/* 
 bool prev_permutation(first, last)
 
 transforma o intervalo [first, last] em uma permutacao anterior, em ordem
 lexicografia
 
 se, para o intervalo [first, last] existir uma permutacao anterior, esta sera
 criada e sera retornado true. Caso contrario, o intervalo [first, last] sera
 transformado na ultima permutacao, sendo retornado false.
*/

#include <iostream>     
#include <algorithm>    
#include <array>

using namespace std;

int main ()
{
 array<int, 4> foo {2, 4, 1, 3};

 do
 {
  // try a new permutation:
  prev_permutation( foo.begin(), foo.end() );

  // print range:
  cout << "foo:";
  for ( int& x:foo )
   cout << ' ' << x;
  cout << endl;
 } while ( !is_sorted( foo.begin(), foo.end() ) );

 cout << "the range is sorted!" << endl;

 return 0;
}