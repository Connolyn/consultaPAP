//============================================================================
// Name        : Aula06-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Cria um vetor com nomes e o ordena ascendentemente
//   C++ STL - Guia de Consulta Rapida
//****************************************************************************

#include <iostream>
#include <algorithm>   // para algoritmos
#include <vector>      // para containers vector
#include <string>      // para objetos string

using namespace std;

int main()
{
 vector<string> nomes; // vetor de objetos string

 // iterador para vetores de objetos string
 vector<string>::iterator it;

 // insere elementos no final de um vetor com o metodo push_back()
 nomes.push_back("Ana");
 nomes.push_back("Rose");
 nomes.push_back("Jane");
 nomes.push_back("Carla");

 cout << "Vetor antes da ordenação: ";
 for ( it = nomes.begin(); it != nomes.end(); ++it )
  cout << *it << ' ';

 cout << endl;

 sort(nomes.begin(), nomes.end()); // ordena o vetor
 cout << "Vetor depois da ordenação: ";
 for ( it = nomes.begin(); it != nomes.end(); ++it )
  cout << *it << ' ';

 return 0;
}
