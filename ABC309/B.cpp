#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector a(n, vector<char>(n));
    rep(i, n) rep(j, n) cin >> a[i][j];
    vector<pair<int, int> > p;
    rep(i, n - 1) p.emplace_back(0, i);
    rep(i, n - 1) p.emplace_back(i, n - 1);
    rep(i, n - 1) p.emplace_back(n - 1, n - 1 - i);
    rep(i, n - 1) p.emplace_back(n - 1 - i, 0);

    int m = p.size();
    vector b = a;
    rep(mi, m) {
        auto [i, j] = p[mi];
        auto [ni, nj] = p[(mi + 1) % m];
        b[ni][nj] = a[i][j];
    }

    rep(i, n) {
        rep(j, n) {
            cout << b[i][j];
        }
        cout << endl;
    }
}
