#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a, T b){
    if(a>b){
        a = b;
    }
}

const long long INF = 1LL << 60;
int N;
vector<long long> h(N);
vector<long long> dp(N);

int num_call=0;

//rec(i):足場０から足場iまで至るまでの最小コスト
long long rec(int i){
    num_call++;
    //DPの値が更新されていたらそのままリターン
    if(dp[i] < INF)return dp[i];
    //ベースケース 足場0のコストは0
    if(i==0) return 0;
    //答えを格納する変数をINFに初期化する
    long long res = INF;
    //頂点i-1から来た場合
    chmin(res, rec(i-1)+abs(h[i]-h[i-1]));
    //頂点i-2から来た場合
    if(i>1)chmin(res, rec(i-2)+abs(h[i]-h[i-2]));
    //結果をメモ化しながら返す
    return dp[i] = res;
}

int main(){
    //入力受け取り
    cout << "配列数は？" << endl;
    cin >> N;
    h.resize(N);
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> h[i];
    //初期化
    dp.assign(N, INF);
    // 再帰関数の呼び出し
    cout << "最小値：" << rec(N-1) << endl;
    cout << "探索回数：" << num_call << endl;
}