#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    vector<int> u = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> v = {-1, 0, 1, -1, 1, -1, 0, 1};
    string str;
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> a.at(i).at(j);
        }
    }

    ll ans = 0;

    rep(s, n)
    {
        rep(t, n)
        {
            rep(b, 8)
            {
                int i = s;
                int j = t;
                ll x = 0;
                rep(k, n){
                    x = x * 10 + (a.at(i).at(j) - '0');
                    i += u.at(b);
                    j += v.at(b);
                    i = (i + n) % n;
                    j = (j + n) % n;
                }
                ans = max(ans, x);
            }
        }
    }
    cout << ans << endl;
}