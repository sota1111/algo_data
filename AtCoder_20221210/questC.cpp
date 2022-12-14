#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, T, i, j, out=0, flg=false;
  cin >> N >> T;
  vector<long int> vec_A(N);
  for(i=0;i<N;i++){
    cin >> vec_A.at(i);
  }
  while(1){
    for(i=0;i<N;i++){
      out += vec_A.at(i);
      if(out > T){
        flg=true;
        break;
      }
    }
    if(flg==true){
      if(i==N){
        i=0;
      }
      break;
    }
  }
  //cout << out << endl;
  cout << i+1 << " " << out-T ;
}