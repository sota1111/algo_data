#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 変数初期化
  int row, col, num = 1;
  vector<string> Sr(num);
  string str, str_sharp = "dfs";

  // 入力を受け取る
  for (int i = 0; i < num; i++) {
    cin >> Sr.at(i);
  }

  for (int col = 0; col < num; col++) {
    for (int row = 0; row < num; row++) {
      str = Sr.at(col).at(row);
      cout << (str == str_sharp);

    }
  }


}