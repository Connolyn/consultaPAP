#include <iostream>
#include <list>

using namespace std;

void imprime(list<int> l, string title)
{

	cout<<title << endl;
	for ( list<int>::iterator it = l.begin(); it != l.end(); ++it)
	{
    	cout << ' ' << *it;

    }
  	cout << endl;


}



int main(){

	list<int> l1, l2;
	list<int> :: iterator it, it1, it2;


	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);


	imprime(l1, "lista 1");

	l2.push_back(4);
	l2.push_back(5);
	l2.push_back(6);
	l2.push_back(7);
	l2.push_back(8);
	l2.push_back(9);


	imprime(l2, "Lista 2");

	
	l1.splice(l1.end(), l2 );

	imprime(l1, "l1 depois do splice");


	imprime(l2, "l2 depois do splice");


	


	cout << "hello" <<endl;

	

	
	



	return 0;
}