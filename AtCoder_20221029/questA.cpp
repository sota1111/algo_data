#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 変数初期化
  int number_pole, max_height_num, max_height=0;
  cin >> number_pole;
  vector<int> pole_height(number_pole);
 
  // 100個の入力を受け取る
  for (int i = 0; i < number_pole; i++) {
    cin >> pole_height.at(i);
    if (pole_height.at(i) > max_height){
        max_height = pole_height.at(i);
        max_height_num = i;
    }
  }
  printf("%d",max_height_num+1);
}