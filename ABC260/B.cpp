#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

vector<bool> ok;

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> a(n);
    vector<int> b(n);

    rep(i, n)
    {
        cin >> a.at(i);
    }
    rep(i, n)
    {
        cin >> b.at(i);
    }

    ok = vector<bool>(n);

    vector<P> p;
    rep(i, n) p.push_back(P(-a.at(i), i));
    sort(p.begin(), p.end());
    rep(i, x) ok.at(p.at(i).second) = true;

    p = vector<P>();
    rep(i, n)
    {
        if (!ok.at(i))
        {
            p.push_back(P(-b.at(i), i));
        }
    }
    sort(p.begin(), p.end());
    rep(i, y) ok.at(p.at(i).second) = true;

    vector<int> sm(n);
    rep(i, n){
        sm.at(i) = a.at(i) + b.at(i);
    }
    p = vector<P>();
    rep(i, n) if(!ok.at(i)){
        p.push_back(P(-sm.at(i), i));
    }
    sort(p.begin(), p.end());
    rep(i, z) ok.at(p.at(i).second) = true;

    rep(i, n){
        if(ok.at(i)){
            cout << i + 1 << endl;
        }
    }
}