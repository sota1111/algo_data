#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 入力を受け取る
    int N, W, bit;
    cout << "配列数は？" << endl;
    cin >> N;
    cout << "目標の和は？" << endl;
    cin >> W;
    vector<int> a(N);
    cout << N << "個の整数を入力ください。" << endl;
    for(int i=0;i<N;++i) cin >> a[i];
    //bitは2^N通りの部分集合全体を動きます
    bool exist = false;
    for (bit = 0; bit < (1 << N); ++bit){
        int sum = 0;
        for (int i=0;i<N;++i){
            // i番目の要素a[i]が部分集合に含まれているかどうか
            if (bit & (1 << i)){
                sum += a[i];
            }
        }
        // sumがWに一致するかどうか
        if (sum==W) exist = true;
    }
    //cout << bit << endl;
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}