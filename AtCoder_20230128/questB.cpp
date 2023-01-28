#include <bits/stdc++.h>
using namespace std;
int main() {
  long int N, M, i, j=0, tmp, num=0, find=false;
  
  cin >> N >> M;
  std::vector<int> S(N), T(M); 
  for(i=0;i<N;i++){
    cin >> S.at(i);
  }
  for(i=0;i<M;i++){
    cin >> T.at(i);
  }
  //cout << endl;

  for(i=0;i<N;i++){
    tmp = S.at(i) - ((S.at(i)/1000)*1000);
    //cout << tmp << endl;
    find = false;
    for(j=0;j<M;j++){
      if(tmp == T.at(j)){
        find = true;
        //cout << "true" << endl;
      }
    }
    if(find == true){
      num++;
    }
  }
  cout << num;
}