#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

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

    // 線形探索
    int found_id_i=-1, found_id_j=-1;
    int min_value = INF;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            // 和がK未満の場合は切り捨てる
            if(a[i] + b[j] < K) continue;

            // 最小値を更新
            if(a[i] + b[j] < min_value){
                min_value = a[i] + b[j];
                found_id_i = i;
                found_id_j = j;
            }
        }
    }

   // 結果出力
   cout << "最小の数は=" <<  min_value << endl;
   cout << "その時のa[i]は=" <<  a[found_id_i] << endl;
   cout << "その時のb[j]は=" <<  b[found_id_j] << endl;
}