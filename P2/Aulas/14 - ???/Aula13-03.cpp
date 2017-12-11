//============================================================================
// Name        : Aula13-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 9) SORT STABLE (UFES)
//****************************************************************************

#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

bool comparar_como_inteiros (double i, double j)
{
 return ( int(i) < int(j) );
}

void imprimir_vetor( vector<double> &v )
{
 for ( vector<double>::iterator it = v.begin(); it != v.end(); ++it )
  cout << ' ' << *it;
 cout << endl;
}

int main () 
{
 double meusNumeros[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
 vector<double> vetor;

 vetor.assign( meusNumeros, meusNumeros + 8 );

 cout << "Valores dentro do vetor:";
 imprimir_vetor(vetor);

 cout << "Usando comparacao padrao:";
 stable_sort ( vetor.begin(), vetor.end() );
 imprimir_vetor(vetor);

 vetor.assign( meusNumeros, meusNumeros + 8 );

 cout << "Usando comparar_como_inteiros`:";
 stable_sort ( vetor.begin(), vetor.end(), comparar_como_inteiros );
 imprimir_vetor(vetor);

 return 0;
}