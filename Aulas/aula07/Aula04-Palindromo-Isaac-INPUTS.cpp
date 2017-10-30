#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
 
 //while(cin.get() != EOF)
 while(!cin.eof())
 {
  string str;
  cin >> str;

  stack<char> s;
  queue<char> q;
  bool conf = true;

  for (unsigned int i=0; i<str.length(); i++) {
      s.push(str[i]);
      q.push(str[i]);
  }

  for (unsigned int i=0; i<str.length(); i++) {
      if (s.top() != q.front()) {
          conf = false;
          break;
      }
      s.pop();
      q.pop();
  }

  if (conf) cout << "Palindromo!" << endl;
   else cout << "Nao e palindromo!" << endl;

 }
 
 return 0;

}
