#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T& a, T b){
    if(a<b){
        a = b;
    }
}


int main(){
    int N;long long W;
    vector<long long> weight(N), value(N);
    cout << "ナップサック問題" << endl;
    //入力受け取り
    cout << "商品の個数は？" << endl;
    cin >> N;
    cout << "目標の重さは？" << endl;
    cin >> W;
    cout << N << "個の重さを入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> weight[i];
    cout << N << "個の商品価格を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> value[i];

    //DPテーブル定義
    vector<vector<long long>> dp(N+1, vector<long long>(W+1, 0));

    //DPループ
    for(int i=0;i<N;++i){
        for(int w=0;w<=W;++w){
            //i番目の品物を選ぶ場合
            if(w-weight[i] >= 0){
                chmax(dp[i+1][w], dp[i][w-weight[i]] + value[i]);
            }
            //i番目の品物を選ばない場合
            chmax(dp[i+1][w],dp[i][w]);
        }
    }
    //最適値の出力
    cout << "最適な価格は" << endl;
    cout << dp[N][W] << endl;
}