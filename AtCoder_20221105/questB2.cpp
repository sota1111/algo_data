#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M, col, row;
  int city1, city2, num_road;

  cin >> N;
  cin >> M;
  vector<vector<int>> data;
  data.emplace_back();
  vector<int> vec(M);
  
  for(col=0;col<M;col++){
    cin >> city1;
    cin >> city2;
    data[city1-1].push_back(city2);
    data[city2-1].push_back(city1);
  }
  
 
  for(row=0;row<N;row++){
    for(col=0;col<M;col++){
      //cout << data.at(row).at(col);
    }
    cout << endl;
  }

 /*
  for(row=0;row<N;row++){
    num_road = 0;
    for(col=0;col<M;col++){
      vec.at(col) = data.at(row).at(col);
      if(vec.at(col) != 0){
        num_road ++;
      }
    }
    cout << num_road << " ";
    sort(vec.begin(), vec.end());
    for(col=0;col<M;col++){
      if(vec.at(col) != 0){
        cout << vec.at(col) << " ";
      }
    }
    cout << endl;
  }
  */
  
}