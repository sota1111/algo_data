#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, i, j;
  int flg1=false, flg2=false, flg3=true;
  cin >> N;

  vector<string> vec_str(N);

  for(i=0;i<N;i++){
    cin >> vec_str.at(i);
    if ( (vec_str.at(i).substr(0,1) =="H") 
    || (vec_str.at(i).substr(0,1) =="D") 
    || (vec_str.at(i).substr(0,1) =="C") 
    || (vec_str.at(i).substr(0,1) =="S") ){
      flg1 = true;
    }else{
      flg1 = false;
    }

    if ( (vec_str.at(i).substr(1,1) =="A") 
    || (vec_str.at(i).substr(1,1) =="T") 
    || (vec_str.at(i).substr(1,1) =="J") 
    || (vec_str.at(i).substr(1,1) =="Q") 
    || (vec_str.at(i).substr(1,1) =="K")
    || (vec_str.at(i).substr(1,1) =="2")
    || (vec_str.at(i).substr(1,1) =="3")
    || (vec_str.at(i).substr(1,1) =="4")
    || (vec_str.at(i).substr(1,1) =="5")
    || (vec_str.at(i).substr(1,1) =="6")
    || (vec_str.at(i).substr(1,1) =="7")
    || (vec_str.at(i).substr(1,1) =="8")
    || (vec_str.at(i).substr(1,1) =="9") ){
      flg2 = true;
    }else{
      flg2 = false;
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if( (i!=j) && vec_str.at(i) == vec_str.at(j) ){
        flg3 = false;
      }
    }
  }
  
  if( (flg1 == true) && (flg2 == true) && (flg3 == true) ){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}