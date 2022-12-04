#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W, i, j, out=true;
  string s;
  cin >> H >> W;
  vector<string> vec_S(W);
  vector<string> vec_T(W);
  for(i=0;i<H;i++){
    cin >> s;
    for(j=0;j<W;j++){
      vec_S.at(j) = vec_S.at(j) + s.at(j);
    }
  }
  for(i=0;i<H;i++){
    cin >> s;
    for(j=0;j<W;j++){
      vec_T.at(j) = vec_T.at(j) + s.at(j);
    }
  }

  for(i=0;i<W;i++){
    for(j=i;j<W;j++){
      //cout << vec_S.at(i) << ":" << vec_T.at(j) << endl;
      if(vec_S.at(i) == vec_T.at(j)){
        swap(vec_T.at(i), vec_T.at(j));
        break;
      }else{
        if(j==(W-1)){
          out = false;
        }
      }
    }
    if(out == false){
      break;
    }
  }
  if(out==true){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}