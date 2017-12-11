//============================================================================
// Name        : Aula13-13.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/upper_bound/
// http://www.cplusplus.com/reference/algorithm/lower_bound/
//****************************************************************************

// lower_bound/upper_bound example

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
 int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
 
 vector<int> v(myints, myints + 8);
 // 10 20 30 30 20 10 10 20
 
 sort( v.begin(), v.end() );
 // 10 10 10 20 20 20 30 30

 vector<int>::iterator low, up;
 low = lower_bound( v.begin(), v.end(), 20 ); // 3
 up  = upper_bound( v.begin(), v.end(), 20 ); // 6

 cout << "lower_bound at position " << (low - v.begin()) << endl;
 cout << "upper_bound at position " << (up  - v.begin()) << endl;

 return 0;
}