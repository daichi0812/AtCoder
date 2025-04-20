#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll p = 998244353;
    a = (a + p) % p;
    b = (b + p) % p;
    c = (c + p) % p;
    d = (d + p) % p;
    e = (e + p) % p;
    f = (f + p) % p;

    cout << (((a * b) % p * c) % p - ((d * e) % p * f) % p + p) % p << endl; 

}