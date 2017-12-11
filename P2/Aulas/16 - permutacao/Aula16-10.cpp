//============================================================================
// Name        : Aula16-10.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//***************************************************************************
// http://www.geeksforgeeks.org/lexicographically-previous-permutation-in-c/
//****************************************************************************

// C++ program to demonstrate working of prev_permutation()
#include <iostream>
#include <algorithm>

/*
 Given a word, find lexicographically smaller permutation of it. 
 
 For example, lexicographically smaller permutation of “4321” is “4312” and 
 next smaller permutation of “4312” is “4231”. If the string is sorted in 
 ascending order, the next lexicographically smaller permutation doesn’t exist.
*/

using namespace std;
 
int main()
{
 string str = "4321";

 if ( prev_permutation( str.begin(), str.end() ) )
  cout << "Previous permutation is "<< str ;
 else
  cout << "Previous permutation doesn't exist" ;
 
 return 0;
}