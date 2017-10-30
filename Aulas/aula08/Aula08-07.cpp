//============================================================================
// Name        : Aula08-07.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// Lista
// C++ STL - Guia de Consulta Rapida - pp. 20 e 21
// jlremif1.cpp - elimina de uma lista elementos com valor maior que "E"
//                uso do predicate unario do usuario na forma de funcao (metodo) 
// jlreverse.cpp - inverte a ordem os elementos da lista
// jlsort01.cpp - ordena a lista ascedentemente usando o operador <
//                a ordem relativa dos elementos equivalente eh mantida
//****************************************************************************

#include <iostream>
#include <list>

using namespace std;

/*
 template <typename Predicate>
 void remove_if(Predicate pred)

 elimina os elementos da lista chamadora para os quais pred(*it)
 retorna true
 
 Predicate - eh uma funcao ou functor (objeto-funcao) que retorna 
             um valor do tipo bool

    Em relacao ao numero de argumentos, um predicate pode ser:
      unario: recebe um argumento e retorna um valor do tipo bool
      binario: recebe dois argumentos e retorna um valor do tipo bool
   		            
 Objeto-funcao (functor) -  eh um objeto de uma classe que sobrecarrega a 
                            funcao operator() e que pode ser chamado com a
                            mesma sintaxe de uma funcao
    Em relacao ao numero de argumentos, um functor pode ser:
      unario: recebe um argumento
      binario: recebe dois argumentos
*/

class maior
{
 public:
  bool operator() (char C) const
  {
   return C > 'E';
  }
};

int main()
{
 list<char> l1;
 char caractere = 'A';
 list<char>::iterator it;

 for (int i = 0; i < 10; i++)
  l1.push_back(caractere++);

 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;

 unsigned int tamanho = l1.size();

 // elimina de uma lista elementos com valor maior que "E"
 // uso do predicate unario do usuario na forma de funcao (metodo) 
 l1.remove_if(maior());

 // inverte a ordem os elementos da lista
 l1.reverse();
 
 // ordena a lista ascedentemente usando o operador <
 // a ordem relativa dos elementos equivalente eh mantida
 l1.sort();

 for (it = l1.begin(); it != l1.end(); ++it)
  cout << *it << " ";
 cout << endl;

 if (l1.size() == tamanho)
  cout << "nenhum elemento removido" << endl;

 return 0;
}