#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, A, B, i, j=0;
  string S, T;
  cin >> N >> A >> B >> S;
  T = S;

  T.at(N-1) = S.at(0);
  T.at(0) = S.at(N-1);

  cout << T;

}