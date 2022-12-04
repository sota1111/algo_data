#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, K, i, j;

  cin >> N >> K;
  vector<int> vec_A(N);
  for(i=0;i<N;i++){
    cin >> vec_A.at(i);
  }
  for(j=0;j<K;j++){
    for(i=0;i<N;i++){
      int a=0;
      if(i==0){
        swap(a, vec_A.at(i));
      }else{
        swap(vec_A.at(i-1), vec_A.at(i));
      }
    }
  }
  for(i=0;i<N;i++){
    cout << vec_A.at(i) << " ";
  }
}