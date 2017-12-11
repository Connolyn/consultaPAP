//============================================================================
// Name        : Aula16-09.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//***************************************************************************
// http://www.geeksforgeeks.org/lexicographically-n-th-permutation-string/
//****************************************************************************

// C++ program to print nth permutation with
// using next_permute()

#include <iostream>
#include <algorithm>

using namespace std;
 
// function to print nth permutation using next_permute()
void nPermute(string str, long int n)
{
 // sort the string in lexicographically ascending order
 sort( str.begin(), str.end() );
 
 // keep iterating until
 // we reach nth position
 long int i = 1;
 do
 {
  // check for nth iteration
  if ( i == n )
   break;
 
  i++;
 } while ( next_permutation( str.begin(), str.end() ) );
 
 // print string after nth iteration
 cout << str;
}
 
int main()
{
 string str = "GEEKSFORGEEKS";
 long int n = 100;

 nPermute(str, n);
 
 return 0;
}