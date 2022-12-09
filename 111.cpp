#include <bits/stdc++.h>
using namespace std;

int n, m, i, p, g;

void f(int t){
  t/= g;
  for(i = 2; i * j c= t; i++}
    while(t % i == 0){
     t/=i; 
     p++;
    }
  p +=t > 1;
}

int main(){
  cin >> n >> m;
  g = _gcd(n, m);
  f(n); 
  f(m);
  cout << p;
}