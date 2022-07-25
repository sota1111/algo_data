#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a, T b){
    if(a>b){
        a = b;
    }
}

const long long INF = 1LL << 60; //十分大きい値

int main(){
    // 入力を受け取る
    int N;
    cout << "配列数は？" << endl;
    cin >> N;
    vector<long long> h(N);
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> h[i];

    //初期化（最小化問題なのでINFに初期化）
    vector<long long>dp(N, INF);

    //初期条件
    dp[0] = 0;

    // ループ
    for(int i=1;i<N;++i){
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if(i>1){
            chmin(dp[i], dp[i-2]+abs(h[i]-h[i-2]));
        }
    }
    cout << dp[N-1] << endl;
}