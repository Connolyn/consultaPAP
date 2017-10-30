#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  float a = 4.5, b = 2.345, c = 4.20;
  cout << "Hello World2!\nC++\n";

  l1:
  	cout<<"1\n";
  	goto l2;

  l3:
  	cout<<"3\n";
  	goto l4;

  l2:
  	cout<<"2\n";
  	goto l3;

  l4:;

  cout<<setfill('.');
  cout<<setw(10)<<10<<endl;
  cout<<setfill('#');
  cout<<setw(10)<<1010<<endl;
  cout<<setw(10)<<101010<<endl;
  cout<<setw(10)<<10101010<<endl;
  cout<<setfill(' ');
  //cout<< setiosflags(ios::showpoint) ; //poe zeros onde falta

  cout<<setw(7)<< a <<endl;
  cout<<setw(7)<< b <<endl;
  cout<<setw(7)<< c <<endl;


  char letra = 'A';
  int inteiro = 69;
  float x = 12312.12312312312;
  cout << "--------------------" << endl;

  //cout<< unsetf(ios::fixed); 

  cout << setprecision(2) << setiosflags(ios::fixed);

  cout << endl <<"Char como caractere: " << letra << endl;
  cout << "codigo ASCII do A: " << (int) letra << endl;
  cout << letra  + 1 << endl;
  cout << inteiro + 'a' << endl; 
  cout << "inteiro : " << inteiro << endl;
  cout << "hexa    : " << hex << inteiro << endl;
  cout << "Octal   : " << oct << inteiro << endl;
  cout << "de int pra char: " << (char)66 << endl;
  cout << "de int para char: " << (char) (256+66) << endl;

  cout<< setw(10) << right << setfill('*') << inteiro << endl;
  cout<< setw(10) << left <<setfill('*') << inteiro << endl;
  
  cout<< setw(10) << setfill('*') << inteiro << endl;
  cout<< setw(10) << setfill('*') << inteiro << endl;
 

  //for (int i = 0; i < 500; i ++){
 // 	cout << "de int para float " << setw(6) <<setfill('0') <<(float) i << "  " << (char) i << endl;
 // }


  return 0;
}