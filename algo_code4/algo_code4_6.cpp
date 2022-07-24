#include <iostream>
#include <vector>
using namespace std;

int fibo(int N){
    //ベースケース
    cout << "fibo(" << N <<")" << endl;
    if(N==0)return 0;
    else if(N==1)return 1;
    
    //再帰呼び出し
    int result = fibo(N-1) + fibo(N-2);
    cout << N <<"項目 = " << result << endl;

    return result;

}

int main(){
    fibo(6);
}