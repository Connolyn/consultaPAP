//============================================================================
// Name        : Aula16-08.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//***************************************************************************
// http://www.geeksforgeeks.org/permutations-of-a-given-string-using-stl/
//****************************************************************************

// C++ program to print all permutations with
// duplicates allowed using next_permute()

#include <iostream>
#include <algorithm>

using namespace std;
 
// function to print permutations of string str
// using next_permute()
void permute(string str)
{
 // sort the string in lexicographically ascennding order
 sort( str.begin(), str.end() );
 
 // keep printing next permutation while there is next permutation 
 do
 {
  cout << str << endl;
 } while ( next_permutation( str.begin(), str.end() ) );
}
 
int main()
{
 string str = "CBA";

 permute(str);
 
 return 0;
}