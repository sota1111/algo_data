#include <bits/stdc++.h>
using namespace std;
int main() {
  long unsigned int i;
  string S, T;
  cin >> S >> T;
  for(i=0;i<T.size();i++){
    if(i==S.size()){
      cout << i+1;
      break;
    }
    if(S.at(i) != T.at(i)){
      cout << i+1;
      break;
    }
  }
}