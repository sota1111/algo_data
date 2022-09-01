#include <iostream>
#include <vector>
#include <algorithm>//sort, lower_bound
using namespace std;
const int INF=20000000;

int main(){
    // 入力を受け取る
    int N, K;
    cout << "配列数は？" << endl;
    cin >> N;
    cout << "最小基準値は？" << endl;
    cin >> K;
    vector<int> a(N), b(N);
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> a[i];
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> b[i];

    // 暫定最小値を格納する変数
    int min_value=INF;

    //bをソート
    sort(b.begin(), b.end());
    b.push_back(INF);
    for(int i=0;i<N;++i){
        //bの中でK=a[i]以上の範囲での最小値を示すイテレータ
        auto iter=lower_bound(b.begin(), b.end(),K-a[i]);
        //イテレータの示す値を取り出す
        int val=*iter;
        //min_valueと比較する
        if(a[i]+val < min_value){
            min_value=a[i] + val;
        }
    }
    cout << "min_value = " << min_value << endl;
}