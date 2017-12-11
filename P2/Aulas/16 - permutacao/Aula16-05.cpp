//============================================================================
// Name        : Aula16-05.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//***************************************************************************
// http://www.geeksforgeeks.org/c-magicians-stl-algorithms/
//****************************************************************************

// C++ program to demonstrate working of next_permutation()
// and prev_permutation()

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
 // initializing vector with array values
 int array[] = {5, 10, 15, 20, 20, 23, 42, 45};
 
 int n = sizeof(array) / sizeof(array[0]);
 vector<int> vect(array, array + n);
 
 cout << "Given Vector is:" << endl;
 for ( int i = 0; i < n; i++ )
  cout << vect[i] << " ";
 
 // modifies vector to its next permutation order
 next_permutation( vect.begin(), vect.end() );
 
 cout << endl << "Vector after performing next permutation:" << endl;
 for ( int i = 0; i < n; i++ )
  cout << vect[i] << " ";
 
 prev_permutation( vect.begin(), vect.end() );
 
 cout << endl << "Vector after performing prev permutation:" << endl;
 for ( int i = 0; i < n; i++ )
  cout << vect[i] << " ";
 
 return 0;
}