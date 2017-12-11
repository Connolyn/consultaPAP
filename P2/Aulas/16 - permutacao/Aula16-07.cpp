//============================================================================
// Name        : Aula16-07.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//***************************************************************************
// http://www.geeksforgeeks.org/permutations-of-a-given-string-using-stl/
//****************************************************************************

// C++ program to print all permutations with
// duplicates allowed using rotate() in STL

/*
 std::rotate 
 
 function rotates elements of a vector/string such that the passed 
 middle element becomes first. For example, if we call rotate for “ABCD” with 
 middle as second element, the string becomes “BCDA” and if we again call 
 rotate with middle as second element, the string becomes “CDAB”. 
*/

#include <iostream>
#include <algorithm>

using namespace std;

// function to print permutations of string str,
// out is used to store permutations one by one
void permute(string str, string out)
{
 // when size of str becomes 0, out has a
 // permutation (length of out is n)
 if (str.size() == 0)
 {
  cout << out << endl;
  return;
 }

 // one be one move all characters at
 // the beginning of out (or result)
 for ( unsigned int i = 0; i < str.size(); i++ )
 {
  // remove first character from str and add it to out
  permute( str.substr(1), out + str[0] );

  // rotate string in a way second character
  // moves to the beginning.
  rotate( str.begin(), str.begin() + 1, str.end() );
 }
}

int main()
{
 string str = "ABC";
 permute( str, "" );
 
 return 0;
}