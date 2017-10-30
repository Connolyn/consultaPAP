//============================================================================
// Name        : Aula03-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Exemplo 15.5 Livro C++ Como Programar 5a edição
//****************************************************************************

// Contrastando a entrada de uma string via cin e cin.get
#include <iostream>
using namespace std;

int main()
{
 // cria dois arrays de char, cada um com 80 elementos
 const int TAMANHO = 80;
 char buffer1[ TAMANHO ];
 char buffer2[ TAMANHO ];

 // utiliza cin para inserir caracteres em buffer1
 cout << "Enter a sentence:" << endl;
 cin >> buffer1;

 // exibe o conteúdo do buffer1
 cout << "\nThe string read with cin was:" << endl
      << buffer1 << endl << endl;

 // utiiza cin.get para inserir caracteres em buffer2
 cin.get( buffer2, TAMANHO );

 // exibe o conteúdo do buffer2
 cout << "The string read with cin.get was:" << endl
      << buffer2 << endl;

 return 0;
}
