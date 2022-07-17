#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//2点（x1, y1）と（x2, y2）との距離を求める関数
double calc_dist(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){
    int N;
    cout << "点数を入力ください。" << endl;
    cin >> N;
    vector<double> x(N), y(N);
    for(int i=0;i<N;++i){
        cout << N <<"点中" << i <<"番目の座標を入力ください。";
        cin >> x[i] >> y[i];
    }

    // 求める値を、十分大きい値で初期化しておく
    double minimum_dist = 1000000.0;

    // 探索開始
    for(int i=0;i<N;++i){
        for(int j=i+1;j<N;++j){
            double dist_i_j = calc_dist(x[i],y[i],x[j],y[j]);

            //暫定最小値minimum_distをdist_i_jと比べる
            if(dist_i_j < minimum_dist){
                minimum_dist = dist_i_j;
            }
        }
    }
    cout << "最小距離は" << endl;
    cout << minimum_dist << endl;
}