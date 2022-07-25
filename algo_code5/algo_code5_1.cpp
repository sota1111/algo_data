#include <iostream>
#include <vector>
using namespace std;
const long long INF = 1LL << 60; //十分大きい値

int main(){
    // 入力を受け取る
    int N;
    cout << "配列数は？" << endl;
    cin >> N;
    vector<int> h(N);
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> h[i];

    //配列dpを定義（配列全体を無限大を表す値に初期化）
    vector<long long>dp(N, INF);

    //再帰的に解く
    dp[0] = 0;

    // ループ
    for(int i=1;i<N;++i){
        if(i==1) dp[i] = abs(h[i]-h[i-1]);
        else dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[N-1] << endl;
}