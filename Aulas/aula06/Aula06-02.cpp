//============================================================================
// Name        : Aula06-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>

using namespace std;

// definicao da template de funcao printArray
template< typename T >
void printArray (const T *array, int count)
{
 for ( int i = 0; i < count; i++ )
  cout << array[i] << "  ";

 cout << endl;
}

int main()
{
 const int ACOUNT = 5; // tamanho do array a
 const int BCOUNT = 7; // tamanho do array b
 const int CCOUNT = 6; // tamanho do array c

 int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
 double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
 char c[ CCOUNT ] = "HELLO"; // posição 6 para ‘/0’

 cout << "O vetor A contem:" << endl;
 printArray( a, ACOUNT );

 cout << "O vetor B contem:" << endl;
 printArray( b, BCOUNT );

 cout << "O vetor C contem:" << endl;
 printArray( c, CCOUNT );

 return 0;
}
