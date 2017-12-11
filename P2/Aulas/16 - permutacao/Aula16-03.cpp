//============================================================================
// Name        : Aula16-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/next_permutation/
//****************************************************************************

// next_permutation example

/*
 A permutation is each one of the N! possible arrangements the elements can take 
(where N is the number of elements in the range). Different permutations can be 
 ordered according to how they compare lexicographicaly to each other; 
 
 The first such-sorted possible permutation (the one that would compare 
 lexicographically smaller to all other permutations) is the one which has all 
 its elements sorted in ascending order, and the largest has all its elements 
 sorted in descending order.

 The comparisons of individual elements are performed using either operator < 
 for the first version, or comp for the second.
*/

#include <iostream>    
#include <algorithm>

using namespace std;

int main ()
{
 int myints[] = {1, 2, 3};

 sort( myints, myints + 3 );

 cout << "The 3! possible permutations with 3 elements:" << endl;
 do
 {
  cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << endl;
 } while ( next_permutation( myints, myints + 3 ) );

 cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << endl;

 return 0;
}