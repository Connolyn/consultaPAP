//============================================================================
// Name        : Aula13-09.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

//****************************************************************************
// http://www.cplusplus.com/reference/algorithm/is_sorted_until/
//****************************************************************************

// is_sorted_until example

#include <iostream>     
#include <algorithm> 
#include <array>

using namespace std;

int main ()
{
 array<int,4> foo {2, 4, 1, 3};
 array<int,4>::iterator it;

 do
 {
  // try a new permutation:
  prev_permutation( foo.begin(), foo.end() );

  // print range:
  cout << "foo:";
  for ( int& x:foo ) 
   cout << ' ' << x;
   
  it = is_sorted_until( foo.begin(), foo.end() );
  
  cout << " (" << (it-foo.begin()) << " elements sorted)" << endl;
  
 } while ( it != foo.end() );

  cout << "the range is sorted!" << endl;

 return 0;
}