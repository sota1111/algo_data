#include <iostream>
#include <vector>
using namespace std;

int func(int N){
    if(N==0)return 0;
    return N + func(N-1);
}

int main(){
    int N=5;
    cout << func(N) << endl;
}