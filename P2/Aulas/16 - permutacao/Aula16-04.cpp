//============================================================================
// Name        : Aula16-04.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/prev_permutation/
//****************************************************************************

// next_permutation example

#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
 int myints[] = {1, 2, 3};

 sort( myints, myints + 3 );
 reverse( myints,myints + 3 );

 cout << "The 3! possible permutations with 3 elements: " << endl;
 do
 {
  cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << endl;
 } while ( prev_permutation( myints, myints + 3 ) );

 cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] <<  endl;

 return 0;
}