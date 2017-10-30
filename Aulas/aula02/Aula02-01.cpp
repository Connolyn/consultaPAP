//============================================================================
// Name        : Aula02-01.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 char letra = 'A';
 int inteiro = 73;
 float x = 4555.5787789898;

 // usa notacao normal para exibir valores numericos em ponto flutuante - 123.45)
 cout.setf(ios::fixed);

 // numero de casas decimais
 cout << setprecision(2);

 // imprime um caractere
 cout << endl << "Char como caractere: " << letra;

 // imprime codigo ASCII do caractere
 cout << endl << "Codigo ASCII: " << (int) letra;

 // imprime o caractere cujo ASCII eh 90
 cout << endl << "ASCII 90: " << (char)90 << endl;

 // imprime um inteiro de varias formas
 cout << endl << "Decimal: " << inteiro;
 cout << endl << "Char : "<< (char) inteiro;
 cout << endl << "Hexa: " << hex << inteiro;
 cout << endl << "Octal: " << oct << inteiro;
 cout << endl << "Float: " << (float) inteiro << endl;

 // imprime um float de varias formas
 cout << endl << "Float como decimal: "  << x;
 cout.unsetf(ios::fixed);
 cout << endl << "Float como cientifico: "  << x;

 // importante
 cout.setf(ios::fixed);

 cout << setfill('.');
 // tamanho minimo 20, ajuste a direita
 cout.setf(ios::right);
 cout << endl << endl << setw(20) << x;
 cout << endl << right << setw(20) << setfill('*') << x << endl;

 // ajuste a direita com zeros anteriores
 cout << endl << setw(20) << setfill('0') << x << setfill(' ') << endl;

 // importante
 cout.unsetf(ios::right);

 // tamanho minimo 20, ajuste a esquerda
 cout.setf(ios::left);
 cout << endl << setw(20) << setfill('*') << x;
 cout << endl << left << setw(20) << setfill('*') << x << endl;

 // ajuste a esquerda, com zeros anteriores
 cout << endl << setw(20) << setfill('*') << x << setfill(' ') << endl;
 cout << x;

 cout.unsetf(ios::left);
 cout << endl;

 return 0;
}
