//============================================================================
// Name        : Aula03-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
using namespace std;

int main()
{
 char ch;
 do
 {
  cout << "Pressionar S ou s para sair,\n qualquer outra tecla para continuar: ";
  cin.get(ch);

  if (ch != '\n')
   cin.ignore();

  if (ch != 'S' && ch != 's')
   cout << "Deseja continuar?" << endl;
  else
   cout << "Saindo..." << endl;

 } while (ch != 'S' && ch != 's');

 system ("pause");

 return 0;
}
