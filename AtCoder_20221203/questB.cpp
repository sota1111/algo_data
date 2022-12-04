#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, W, i, j, out=0;
  cin >> N;
  vector<long int> vec_A(N);
  vector<long int> vec_S(N);
  for(i=0;i<N;i++){
    cin >> vec_S.at(i);
    if(i == 0){
      cout << vec_S.at(i) << " ";
      continue;
    }
    vec_A.at(i) = vec_S.at(i) - vec_S.at(i-1);
    cout << vec_A.at(i) << " ";
  }
}