#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M, col, row;
  int city1, city2, num_road;

  cin >> N;
  cin >> M;
  vector<vector<int>> data(N, vector<int>(N));
  vector<int> vec(N);
  
  for(col=0;col<M;col++){
    cin >> city1;
    cin >> city2;
    data.at(city1-1).at(0)++;
    data.at(city1-1).at(data.at(city1-1).at(0)) = city2;
    data.at(city2-1).at(0)++;
    data.at(city2-1).at(data.at(city2-1).at(0)) = city1;
  }
  
  /*
  for(row=0;row<N;row++){
    for(col=0;col<data.at(row).at(0)+1;col++){
      cout << data.at(row).at(col) << " ";
    }
    cout << endl;
  }
  */
  
  for(row=0;row<N;row++){
    vector<int> vec(N);
    for(col=1;col<data.at(row).at(0)+1;col++){
      vec.at(col) = data.at(row).at(col);
    }
    cout << data.at(row).at(0) << " ";
    sort(vec.begin(), vec.end());
    for(col=0;col<N;col++){
      if(vec.at(col) != 0){
        cout << vec.at(col) << " ";
      }
    }
    cout << endl;
  }
}