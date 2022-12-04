#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S, T;
  int out=0, i;
  cin >> S >> T;
  if (S.find(T) != string::npos){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}