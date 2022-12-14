#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, i, out=true;
  string S;
  cin >> S;

  //cout << true << endl;
  
  if(S.at(0) >= 'A' && S.at(0) <= 'Z'){
    
  }else{
    out = false;
  }
  //cout << out << endl;
  if((S.size()>=3)&&(S.size()<=8)){
    if(S.at(S.size()-1) >= 'A' && S.at(S.size()-1) <= 'Z'){
      
    }else{
      out = false;
    }
  }else{
    out=false;
  }
  //cout << out << endl;
  for(i=1;i<(int)(S.size()-1);i++){
    //cout << S.at(i) << endl;
      if((S.at(i) >= '0') && (S.at(i) <= '9')){
        
      }else{
        out = false;
        break;
      }
  }
  //cout << out << endl;
  if(out == true){
    N = stoi(S.substr(1, S.size()-2));
    //cout << N << endl;
  }

  //cout << out << endl;


  if((out==true)&&(N>=100000)&&(N<=999999)){
    cout << "Yes";
  }else{
    cout << "No";
  }
}