#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {
    int n;
    cin >> n;
    vector a(n, vector<int>(n));
    rep(i, n) rep(j, n) cin >> a[i][j];
    vector b(n, vector<int>(n));
    rep(i, n) rep(j, n) cin >> b[i][j];

    rep(r, 4) {
        bool ok = true;
        rep(i, n) rep(j, n) {
            if (a[i][j] == 1 && b[i][j] == 0) {
                ok = false;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
        vector aa(n, vector<int>(n));
        rep(i, n)rep(j, n) {
            aa[i][j] = a[(n-1)-j][i];
        }
        a = aa;
    }
    cout << "No" << endl;

}