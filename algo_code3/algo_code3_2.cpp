#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 入力を受け取る
    int N, v;
    cout << "配列数は？" << endl;
    cin >> N;
    cout << "探索する整数は？" << endl;
    cin >> v;
    vector<int> a(N);//vector型は()で初期化して、[]でアクセスする
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> a[i];

    // 線形探索
    int found_id = -1;
    bool exist = false;
    for(int i=0;i<N;++i){
        if(a[i]==v){
            found_id = i;
            exist = true;
        }
    }

   // 結果出力
   if(exist){
    cout << "Yes" << endl;
    cout << "index=" << found_id << endl;
   }
   else cout << "No" << endl;

}