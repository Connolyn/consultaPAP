//============================================================================
// Name        : Aula13-11.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/binary_search/
//****************************************************************************

// binary_search example

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunction (int i, int j)
{ 
 return ( i < j); 
}

int main ()
{
 int myints[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
 
 vector<int> v(myints, myints + 9);
 // 1 2 3 4 5 4 3 2 1

 // using default comparison:
 sort( v.begin(), v.end() );

 cout << "looking for a 3... ";
 if ( binary_search( v.begin(), v.end(), 3 ) )
  cout << "found!" << endl;
 else 
  cout << "not found." << endl;

 // using myfunction as comp:
 sort( v.begin(), v.end(), myfunction );

 cout << "looking for a 6... ";
 if ( binary_search( v.begin(), v.end(), 6, myfunction ) )
  cout << "found!" << endl;
 else
  cout << "not found." << endl;

 return 0;
}