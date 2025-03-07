#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i, k)
    {
        cin >> a.at(i);
        a.at(i)--;
    }
    vector<ll> x(n);
    vector<ll> y(n);
    rep(i, n) cin >> x.at(i) >> y.at(i);

    double mx = 0.0;

    rep(s, n)
    {
        double mn = 1e10;
        rep(t, k)
        {
            double dis = sqrt(pow(x.at(s) - x.at(a.at(t)), 2) + pow(y.at(s) - y.at(a.at(t)), 2));
            mn = min(mn, dis);
        }
        if (mn != 1e10)
        {
            mx = max(mx, mn);
        }
    }

    cout << fixed << setprecision(10) << mx << endl;
}