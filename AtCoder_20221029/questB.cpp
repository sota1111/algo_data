#include <bits/stdc++.h>
using namespace std;
#define VALUE 998244353
 
int main() {
  // 変数初期化
  int number_num=6;
  vector<unsigned long> ABCDEF(number_num);
  double val_ABC, val_DEF;
  unsigned long val_mod;
 
  // 100個の入力を受け取る
  for (int i = 0; i < number_num; i++) {
    cin >> ABCDEF.at(i);
  }
  val_ABC = (double)ABCDEF.at(0) * (double)ABCDEF.at(1) * (double)ABCDEF.at(2);
  val_DEF = (double)ABCDEF.at(3) * (double)ABCDEF.at(4) * (double)ABCDEF.at(5);

  val_mod = ((unsigned long)(val_ABC - val_DEF)) % VALUE;
  cout << val_mod << endl;

}