/*1,…,Nと番号付けられたN個の都市と、都市間を結ぶM本の道路があります。
i(1≤i≤M)番目の道路は都市Aiと都市Biを結んでいます。

以下の指示に従い、N行にわたって出力してください。

都市i(1≤i≤N)と道路で直接結ばれた都市がdi個あるとし、それらを昇順に都市ai,1
​,…,ai,diとおく。i(1≤i≤N)行目には、di​+1個の整数di,ai,1,…,ai,diを、この順番で空白区切りで出力せよ。*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        a[u - 1].push_back(v);
        a[v - 1].push_back(u);
    }
    for (int i = 0; i < n; ++i) {
        sort(begin(a[i]), end(a[i]));
        cout << size(a[i]);
        for (int a : a[i]) {
            cout << ' ' << a;
        }
        cout << '\n';
    }
    return 0;
}