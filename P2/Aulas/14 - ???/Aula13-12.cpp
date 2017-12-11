//============================================================================
// Name        : Aula13-12.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/equal_range/
//****************************************************************************

// equal_range example

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool mygreater(int i,int j)
{
 return ( i > j );
}

int main ()
{
 int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};

 vector<int> v(myints, myints + 8);
 // 10 20 30 30 20 10 10 20
 
 pair<vector<int>::iterator,vector<int>::iterator> bounds;

 // using default comparison:
 sort( v.begin(), v.end() );
 // 10 10 10 20 20 20 30 30
 
 bounds = equal_range( v.begin(), v.end(), 20 );
 // 3 e 6
 
 cout << "bounds at positions " << (bounds.first - v.begin());
 cout << " and " << (bounds.second - v.begin()) << endl;

 // using "mygreater" as comp:
 sort( v.begin(), v.end(), mygreater );
 // 30 30 20 20 20 10 10 10
 
 bounds = equal_range( v.begin(), v.end(), 20, mygreater ); 
 // 2 e 5
 
 cout << "bounds at positions " << (bounds.first - v.begin());
 cout << " and " << (bounds.second - v.begin()) << endl;

 return 0;
}