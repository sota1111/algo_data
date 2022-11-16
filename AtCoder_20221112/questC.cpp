#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
 
// 入力: グラフ G と，探索の始点 s
// 出力: s から各頂点への最短路長を表す配列
int search(const Graph &G, int s) {
    int N = (int)G.size(); // 頂点数
    int height=0;
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    // 初期条件 (頂点 s を初期頂点とする)
    dist[s] = 0;
    que.push(s); // s を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v からたどれる頂点をすべて調べる
        for (int x : G[v]) {
            // すでに発見済みの頂点は探索しない
            if (dist[x] != -1) continue; 
            if( height < x ){
              height = x;
            }

            // 新たな白色頂点 x について距離情報を更新してキューに挿入
            dist[x] = dist[v] + 1;
            que.push(x);
        }
    }
    return height;
}

int main() {
  int N, i, height=1;
  cin >> N;

  // int型の2次元配列(N×2要素の)の宣言
  Graph G(N);
  vector<vector<int>> ladder(N, vector<int>(2));

  vector<int> vec_P(N);

  for(i=0;i<N;i++){
    cin >> ladder.at(i).at(0);
    cin >> ladder.at(i).at(1);
  }
  G = ladder;
  //cout << height << endl;

  height = search(G, height);
  cout << height;
}