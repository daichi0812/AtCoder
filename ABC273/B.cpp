#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll x, k;
    cin >> x >> k;
    ll t = 1;

    rep(i, k){
        int d = x / t % 10;
        t *= 10;
        x = x / t * t;
        if(d >= 5){
            x += t;
        }
    }

    cout << x << endl;
}