#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, i, j=0;
  string S, T;
  
  cin >> N >> S;
  T = regex_replace(S, regex("na"), "nya");
  cout << T;
}