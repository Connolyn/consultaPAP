//============================================================================
// Name        : Aula13-07.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/partial_sort_copy/
//****************************************************************************

// partial_sort_copy example

#include <iostream>    
#include <algorithm>   
#include <vector>      

using namespace std;

bool myfunction (int i,int j)
{
 return (i <j); 
}

int main ()
{
 int myints[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
 vector<int> myvector (5);

 // using default comparison (operator <):
 partial_sort_copy( myints, myints + 9, myvector.begin(), myvector.end() );

 // using function as comp
 partial_sort_copy( myints, myints + 9, myvector.begin(), myvector.end(), myfunction );

 // print out content:
 cout << "myvector contains:";
 for ( vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it )
   cout << ' ' << *it;
 cout << endl;

 return 0;
}