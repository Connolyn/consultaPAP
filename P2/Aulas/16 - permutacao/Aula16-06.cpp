//============================================================================
// Name        : Aula16-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//***************************************************************************
// http://www.geeksforgeeks.org/find-the-next-lexicographically-greater-word-than-a-given-word/
//****************************************************************************

// find the next lexicographically greater permutation of a word

/*
 Given a word, find lexicographically greater permutation of it. 
 For example, lexicographically next permutation of “gfg” is “fgg” 
 and next permutation of “acb” is “bac”.

 Note : In some cases, the next lexicographically greater word 
 might not exist, e.g,. “aaa” and “edcba”
*/

#include <iostream>
#include <algorithm>

using namespace std;
 
int main()
{
 string s = {"gfg"};

 bool val = next_permutation(s.begin(), s.end());
 
 if ( val == false )
  cout << "No Word Possible" << endl;
 else
  cout << s << endl;
 
 return 0;
}