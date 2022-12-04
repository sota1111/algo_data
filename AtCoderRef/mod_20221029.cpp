/* 非負整数 A,B,C,D,E,F があり、A×B×C≥D×E×F をみたしています。
(A×B×C)−(D×E×F) の値を 998244353 で割った余りを求めてください。*/
// 一般に非負整数 A,B および正整数 M について、 (A∗B)%M=((A%M)∗(B%M))%Mが成り立つ

#include <bits/stdc++.h>
using namespace std;
const int mod=998244353;

int main() {
  long long a,b,c,d,e,f;
  long long x,y,ans;

  cin >> a >> b >> c >> d >> e >> f;

  x=((a%mod)*(b%mod))%mod;
  x=(x*(c%mod))%mod;
  y=((d%mod)*(e%mod))%mod;
  y=(y*(f%mod))%mod;

  ans=(x+mod-y)%mod;

  cout << ans <<endl;
  return 0;
}
