#include <iostream>
#include <vector>
#include <algorithm>//sort, lower_bound
using namespace std;

int main(){
    // 入力を受け取る
    int N;
    cout << "風船の数は？" << endl;
    cin >> N;
    vector<long long> H(N), S(N);
    cout <<  "各風船の初期高度は？" << endl;
    for(int i=0;i<N;++i) cin >> H[i];
    cout <<  "各風船の上昇速度は？" << endl;
    for(int i=0;i<N;++i) cin >> S[i];

    //二分探索の上限値を求める
    long long M = 0;
    for(int i=0;i<N;++i) M=max(M, H[i]+S[i]*N);
    cout << "N秒後の最大高度：" << M << endl;
    //二分探索
    long long left=0, right=M;
    while(right - left > 1){//O(logM)
        long long mid = (left + right) / 2;

        //判定する
        bool ok = true;
        vector<long long> t(N, 0); //各風船を割るための制限時間
        for(int i=0;i<N;++i){
            //そもそもmidが初期高度より低かったらfalse
            if(mid<H[i]) ok=false;
            else t[i]=(mid-H[i])/S[i];//制限時間を求める
        }
        //制限時間が差し迫っている順にソートする
        sort(t.begin(), t.end());//O(NlogN)
        for(int i=0;i<N;++i){//ここがkeyとなる
            //時間切れ発生の場合はfalse
            if(t[i]<i) ok=false;
        }
        if(ok) right=mid;
        else left=mid;
    }
    cout << "最小高度：" << right << endl;

}