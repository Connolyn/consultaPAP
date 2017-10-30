//============================================================================
// Name        : Aula03-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Exemplo 15.6 Livro C++ Como Programar 5a edição
//****************************************************************************

// Inserindo caracteres utilizando a função-membro (método) getline
#include <iostream>
using namespace std;

int main()
{
 const int TAMANHO = 80;
 char buffer[ TAMANHO ];

 // insere caracteres no buffer via função-mebro getline
 cout << "Enter a sentence:" << endl;
 cin.getline( buffer, TAMANHO );

 // exibe o conteúdo do buffer
 cout << "\nThe sentence entered is:" << endl << buffer << endl;

 return 0;
}
