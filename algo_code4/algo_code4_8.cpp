#include <iostream>
#include <vector>
using namespace std;

// fibo(N)の答えをメモ化する配列
vector<long long> memo;

int fibo(int N){
    //ベースケース
    cout << "fibo(" << N <<")" << endl;
    if(N==0)return 0;
    else if(N==1)return 1;
    
    //メモをチェック
    if(memo[N] != -1) return memo[N];

    //答えをチェックしながら、再帰呼び出し
    return memo[N] = fibo(N-1) + fibo(N-2);

}

int main(){
    //メモ化用配列を-1で初期化する
    int M=8;
    memo.assign(M, -1);

    //fibo(49)を呼び出す
    fibo(M-1);

    //memo[0], ... , memo[49]に答えが格納されている
    for(int N=2;N<M;++N){
        cout << N << " 項目: " << memo[N] << endl;
    }
}