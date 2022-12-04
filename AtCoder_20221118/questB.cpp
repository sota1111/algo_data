#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, c, d, h, m;
  int hh, mm;
  //int N, K, i=0, j;

  cin >> h >> m;
  a = (int)(h/10);
  b = h%10;
  c = (int)(m/10);
  d = m%10;

  while(1){
    hh = a*10 + c;
    mm = b*10 + d;
    if( (hh<24) && (mm<60) ){
      h = a*10 + b;
      m = c*10 + d;
      //cout << hh << " " << mm << endl;
      cout << h << " " << m << endl;
      break;
    }
    //i++;
    d++;
    if(d>=10){
      d = 0;
      c++;
      if(c>=6){
        c = 0;
        b++;
        if(b>=10){
          b = 0;
          a++;
        }
        h = a*10 + b;
        if(h>=24){
          a = 0;
          b = 0;
        }
      }
    }
    //if(i==(1000))break;
  }
  //cout << a << " " << b << " " << c << " " << d << endl;
}