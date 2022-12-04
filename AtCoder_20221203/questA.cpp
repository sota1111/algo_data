#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W, i, j, out=0;
  string cmp_str;
  string s;
  cin >> H >> W;
  vector<string> vec_S(W);
  for(i=0;i<H;i++){
    cin >> s;
    for(j=0;j<W;j++){
      cmp_str = s.at(j);
      if(cmp_str == "#"){
        out += 1;
      }
    }
  }
  cout << out << endl;
}