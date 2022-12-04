#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  int out=0, i;
  cin >> str;
  for(i=0;i<str.size();i++){
    if(str.at(i) == 'v'){
      out += 1;
    }else if(str.at(i) == 'w'){
      out += 2;
    }
  }
  cout << out << endl;
}