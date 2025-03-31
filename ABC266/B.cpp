#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll  = long long;

int main(){
    ll n;
    cin >> n;
    ll mx = 998244353;
    ll x = 0;

    rep(i, mx){
        if((n - x) % mx == 0){
            cout << x << endl;
            return 0;
        }else{
            x++;
        }
    }
}