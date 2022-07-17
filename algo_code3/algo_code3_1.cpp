#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 入力を受け取る
    int N, v;
    cout << "整数の数は？" << endl;
    cin >> N;
    cout << "探索する整数は？" << endl;
    cin >> v;
    vector<int> a(N);//vector型は()で初期化して、[]でアクセスする
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> a[i];

    // 線形探索
    bool exist = false;
    for(int i=0;i<N;++i){
        if(a[i]==v){
            exist = true;
        }
    }

   // 結果出力
   if(exist) cout << "Yes" << endl;
   else cout << "No" << endl;

}