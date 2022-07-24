#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a){
    //ベースケース
    cout << "func(" << w <<")" << endl;
    if(i==0){
        if(w == 0) return true;
        else return false;
    }
    
    //a[i-1]を選ばない場合
    if (func(i-1, w, a)) return true;

    //a[i-1]を選ぶ場合
    if (func(i-1, w-a[i-1], a)) return true;

    //どちらもfalseの場合はfalse
    return false;
}

int main(){
    // 入力を受け取る
    int N, W;
    cout << "配列数は？" << endl;
    cin >> N;
    cout << "目標の和は？" << endl;
    cin >> W;
    vector<int> a(N);
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> a[i];

    //再帰的に解く
    if (func(N, W, a)) cout << "Yes" << endl;
    else cout << "No" << endl;
}