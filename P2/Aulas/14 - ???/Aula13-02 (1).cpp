//============================================================================
// Name        : Aula13-02.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// 8) SORT COM SOBRECARGA (UFES)
//****************************************************************************

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

struct maratona
{
 char equipe;
 int  corretos;
 int  errados;
 
 bool operator<(const maratona &m) const
 {
  if (corretos == m.corretos)
  {
   if (errados == m.errados)
    return toupper(equipe) > toupper(m.equipe);
   else
    return errados < m.errados;
  }
  else
   return corretos > m.corretos;
 }
};

int main()
{
 list<maratona> lista;
 maratona aux;

 aux.equipe   = 'A';
 aux.corretos =  10;
 aux.errados  =   7;
 
 lista.push_front( aux );
 lista.push_front( (maratona) {'B', 12, 8} );
 lista.push_front( (maratona) {'C', 20, 7} );
 lista.push_front( (maratona) {'D', 12, 9} );

 // ordena a lista ascendentemente os elementos usando o operador <
 // A ordem relativa dos elementos equivalentes eh mantida
 lista.sort();

 for( list<maratona>::iterator i = lista.begin(); i != lista.end(); i++ )
  cout << i->equipe << ' ' << i->corretos << ' ' << i->errados << endl;
    
 return 0;
}