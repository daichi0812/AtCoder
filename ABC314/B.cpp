#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> a(n);
    rep(i, n) {
        cin >> c[i];
        a[i] = vector<int>(c[i]);
        rep(j, c[i]) cin >> a[i][j];
    }
    int x;
    cin >> x;
    int mn = 40;
    vector<bool> ok(n, false);
    rep(i, n) {
        rep(j, c[i]) {
            if (x == a[i][j]) {
                ok[i] = true;
                mn = min(mn, c[i]);
            }
        }
    }
    vector<int> ans;
    int k = 0;
    rep(i, n) {
        if (ok[i] && mn == c[i]) {
            ++k;
            ans.push_back(i);
        }
    }
    cout << k << endl;
    for(int i = 0; i < ans.size(); ++i) cout << ans[i] + 1 << " ";
    cout << endl;
}