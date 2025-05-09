#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> c(n);
    rep(i, n) cin >> c[i];
    vector<ll> r(n);
    rep(i, n) cin >> r[i];
    bool isT = false;
    rep(i, n) if (t == c[i]) isT = true;
    if (isT) {
        ll mx = 0;
        rep(i, n) if (t == c[i]) mx = max(mx, r[i]);
        rep(i, n) if (mx == r[i]) cout << i + 1 << endl;
    }else {
        ll mx = 0;
        rep(i, n) if (c[0] == c[i]) mx = max(mx, r[i]);
        rep(i, n) if (mx == r[i]) cout << i + 1 << endl;
    }
}