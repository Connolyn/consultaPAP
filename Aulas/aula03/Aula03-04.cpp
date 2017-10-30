//============================================================================
// Name        : Aula03-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Exemplo 15.7 Livro C++ Como Programar 5a edição
//****************************************************************************

// Entrada/Saída não formatada utilizando read, gcount e write
#include <iostream>
using namespace std;

int main()
{
 const int TAMANHO = 80;
 char buffer[ TAMANHO ];

 // utiliza função-membro read para inserir caracteres no buffer
 cout << "Enter a sentence:" << endl;
 cin.read( buffer, 20 );

 // utiliza funções-membro write e gcount para exibir caracteres do buffer
 cout << endl << "The sentence entered was:" << endl;
 cout.write( buffer, cin.gcount() );
 cout << endl;

 return 0;
}
