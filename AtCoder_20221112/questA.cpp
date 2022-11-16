#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, X, k;
  cin >> N >> X;

  vector<int> vec_P(N);

  for(k=0;k<N;k++){
    cin >> vec_P.at(k);
  }

  for(k=0;k<N;k++){
    if(vec_P.at(k) == X){
      cout << k+1 << endl;
    }
  }
}