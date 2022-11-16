#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  int out = -1, i;
  cin >> str;
  for(i=0;i<str.size();i++){
    if(str.at(i) == 'a'){
      out = i+1;
    }
  }
  cout << out << endl;
}