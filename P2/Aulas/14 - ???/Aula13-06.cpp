//============================================================================
// Name        : Aula13-06.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/partial_sort/
//****************************************************************************

// partial_sort example

#include <iostream>     
#include <algorithm>    
#include <vector>       

using namespace std;

bool myfunction (int i,int j)
{ 
 return ( i < j);
}

int main ()
{
 int myints[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
 vector<int> myvector( myints, myints + 9 );

 // using default comparison (operator <):
 partial_sort( myvector.begin(), myvector.begin() + 5, myvector.end() );

 // using function as comp
 partial_sort( myvector.begin(), myvector.begin() + 5, myvector.end(), myfunction );

 // print out content:
 cout << "myvector contains:";
 for ( vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it )
  cout << ' ' << *it;
 cout << endl;

 return 0;
}