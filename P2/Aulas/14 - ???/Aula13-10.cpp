//============================================================================
// Name        : Aula12-20.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/nth_element/
//****************************************************************************

// nth_element example

/*
 void random_shuffle(first, last)
 
 reordena aleatoriamente os elementos do intervalo [first, last] usando uma 
 funcao (que depende da implementacao) para gerar numeros
 pseudo-aleatorios
*/

/*
 void nth_element(first, nth, last)
 
 coloca um elemento de uma sequencia na posicao onde ele estaria se a
 sequencia fosse ordenada. o elemento colocado em "nth" eh o e-nesimo
 elemento menor do intervalo, onde n = posic - first
 
 reorganiza os elementos de tal forma que o elemento na posicao "nth" eh o 
 elemento que se encontra naquela posicao em uma sequencia ordenada.
 
 Os outros elementos sao deixados sem qualquer ordem especifica, 
 exceto que nenhum dos elementos que precedem o elemento na posicao "nth" eh 
 maior do que ele e nenhum dos elementos seguintes eh menor.
*/


#include <iostream>     
#include <algorithm>   
#include <vector>   

using namespace std;

bool myfunction (int i,int j) 
{
 return ( i < j );
}

int main ()
{
 vector<int> myvector;

 // set some values:
 for ( int i = 1; i < 10; i++ )
  myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

 cout << *(myvector.begin() + 5) << endl;
 
 random_shuffle( myvector.begin(), myvector.end() );
 // 9 2 7 3 1 6 8 4 5
  
 // using default comparison (operator <):
 //nth_element( myvector.begin(), myvector.begin() + 5, myvector.end() );

 // using function as comp
 nth_element( myvector.begin(), myvector.begin() + 5, myvector.end(), myfunction );

 // print out content:
 cout << "myvector contains:";
 for ( vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it )
  cout << ' ' << *it;
 cout << endl;

 return 0;
}