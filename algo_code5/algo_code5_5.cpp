#include <iostream>
#include <vector>
using namespace std;
int num_call=0;
int N=5;
vector<long long> h(N);
const long long INF = 1LL << 60;

template<class T> void chmin(T& a, T b){
    if(a>b){
        a = b;
    }
}

//rec(i):足場０から足場iまで至るまでの最小コスト
long long rec(int i){
    //cout << num_call << endl;
    num_call++;
    //足場0のコストは0
    if(i==0)return 0;
    //答えを格納する変数をINFに初期化する
    long long res = INF;
    //頂点i-1から来た場合
    chmin(res, rec(i-1)+abs(h[i]-h[i-1]));
    //頂点i-2から来た場合
    if(i>1)chmin(res, rec(i-2)+abs(h[i]-h[i-2]));
    //答えを返す
    return res;
}

int main(){
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> h[i];
    // 再帰関数の呼び出し
    cout << rec(N-1) << endl;
    cout << "探索回数：" << num_call << endl;
}