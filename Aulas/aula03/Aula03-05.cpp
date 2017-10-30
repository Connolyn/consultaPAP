//============================================================================
// Name        : Aula03-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Exemplo 15.10 Livro C++ Como Programar 5a edição
//****************************************************************************

// Demonstrando a função-membro (método) width
#include <iostream>
using namespace std;

int main()
{
 int widthValue = 4;
 char sentence[ 10 ];

 cout << "Enter a sentence:" << endl;
 // insere somente 5 caracteres da frase
 cin.width( 5 );

 // define largura de campo, então exibe caracteres com base nessa largura
 while ( cin >> sentence )
 {
  cout.width( widthValue++ );
  cout << sentence << endl;
  // insere mais 5 caracteres a partir da frase
  cin.width( 5 );
 }

 return 0;
}
