//============================================================================
// Name        : Questao05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

// ***************************************************************************
// URI Online Judge - ID 1260 - Especies de Madeira
// https://github.com/leonardofalk/URI-Homework
// ***************************************************************************

//****************************************************************************
// Avaliacao 01 (P1) - Questao 05
//****************************************************************************

#include <iostream>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
 map <string, double> arvores;
	
 string arvore; 
 int casos, total = 0;
	
 cout << fixed << setprecision(4);
	
 cin >> casos;
 cin.get();
 getline(cin, arvore);
	
 for ( int i = 1; i <= casos; i++)
 {
  while (getline(cin, arvore) and arvore[0] != '\0') 
  {
   /*
     o caractere '\0' representa o fim de caractere,
	 eh sempre o ultimo em qualquer string/char
				
	 str = "exemplo";
	 str[1] == '\0'; -> false
	 str[7] == '\0'; -> true
				
	no problema, caso 'arvore[0]' seja fim de char entao
    foi lida uma linha em branco ou chegamos no fim da entrada
   */

   /*
 	le a quantidade de arvore com o nome 'arvore' e coloca no mapa
    o total tambem eh aumentado com cada arvore lida independente do seu nome
   */
   arvores[arvore]++;
   total++;
  }
		
  if (i > 1)
  {
   /* linha em branco entre os casos de teste */
   cout << endl;
  }
		
  for ( map <string, double>::iterator it = arvores.begin(); it != arvores.end(); it++ )
  {
   /*
	mostra o nome da arvore e a sua porcentagem
	comparada ao total de arvores usando regra de tres
   */
   cout << it -> first << " " << 100.0 * it -> second / total << endl;
  }
		
  /* resetamos o mapa e o total */
  total = 0;
  arvores.clear();
 }
	
 return 0;
}