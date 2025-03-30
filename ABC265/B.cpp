#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n, m, t;
    cin >> n >> m >> t;
    vector<ll> a(n - 1);
    rep(i, n - 1){
        cin >> a[i];
    }
    bool ans = true;
    vector<ll> bonus(n);

    rep(i, m){
        int x, y;
        cin >> x >> y;
        bonus[x - 1] = y;
    }

    rep(i, n - 1){
        t += bonus[i];
        t -= a[i];
        
        if(t < 1){
            ans = false;
            break;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}