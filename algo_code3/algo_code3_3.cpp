#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main(){
    // 入力を受け取る
    int N, v;
    cout << "配列数は？" << endl;
    cin >> N;
    vector<int> a(N);//vector型は()で初期化して、[]でアクセスする
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> a[i];

    // 線形探索
    int min_value = INF;
    for(int i=0;i<N;++i){
        if(a[i] < min_value) min_value = a[i];
    }

   // 結果出力
   cout << "最小の数は=" <<  min_value << endl;

}