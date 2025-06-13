#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n;
    cin >> n;
    bool ok = false;
    ll x = 0;
    ll y = 0;
    while(n >= pow(2, x) * pow(3, y)){
        while(n >= pow(2, x) * pow(3, y)){
            if(n == pow(2, x) * pow(3, y)) ok = true;
            y++;
        }
        y = 0;
        x++;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}