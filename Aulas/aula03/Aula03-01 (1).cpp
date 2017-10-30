//============================================================================
// Name        : Aula03-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Exemplo 15.4 Livro C++ Como Programar 5a edição
//****************************************************************************

// Utilizando funções-membro (métodos) get, put e eof
#include <iostream>
using namespace std;

int main()
{
 // utiliza int, porque char não pode representar EOF
 int caractere;

 // solicita para o usuário inserir linha de texto
 cout << "Before input, cin.eof() is " << cin.eof() << endl
      << "Enter a sentence followed by end-of-file:" << endl;

 // utiliza get para ler cada caractere; utiliza put para exibi-los
 while ( ( caractere = cin.get() ) != EOF )
  cout.put( caractere );

 // exibe caractere de fim do arquivo
 cout << "\nEOF in this system is: " << caractere << endl;
 cout << "After input of EOF, cin.eof() is " << cin.eof() << endl;

 return 0;
}
