#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, i, j=0;
  
  cin >> N ;
  std::vector<string> S(N); 
  for(i=0;i<N;i++){
    cin >> S.at(i);
    if(S.at(i) == "For"){
      j++;
    }
  }
  if(double(N/2) < double(j)){
    cout << "Yes";
  }else{
    cout << "No";
  }
}