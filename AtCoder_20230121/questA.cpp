#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, P, Q, R, S, i, j=0;
  
  cin >> N >> P >> Q >> R >> S;
  std::vector<int> A(N), B(N); 
  for(i=0;i<N;i++){
    cin >> A.at(i);
  }
  B = A;
  for(i=P-1;i<Q;i++){
    B.at(i) = A.at(R-1+j);
    j++;
  }
  j=0;
  for(i=R-1;i<S;i++){
    B.at(i) = A.at(P-1+j);
    j++;
  }
  for(i=0;i<N;i++){
    cout << B.at(i) << " ";
  }
}