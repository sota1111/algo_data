#include <bits/stdc++.h>
using namespace std;
int main() {
  long unsigned long int i=0,j,  K, P=1, mod_i, mod_i_out;
  cin >> K;
  vector<long int> vec_S;

  while(1){
    i++;
    mod_i = i%K;
    vec_S.push_back(mod_i);
    for(j=0;j<i;j++){
      mod_i_out = mod_i_out * vec_S.at(j);
    }
    if(mod_i_out%K == 0){
      cout << i;
      break;
    }
  }
}