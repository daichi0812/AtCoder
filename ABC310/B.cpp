#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    vector<int> c(n);
    vector f(n, vector<int>(m));
    rep(i, n) {
        cin >> p[i] >> c[i];
        rep(j, c[i]) cin >> f[i][j];
    }

    rep(i, n) {
        rep(j, n) {
            if (p[i] < p[j]) continue;
            bool ok = true;
            rep(k, c[i]) {
                bool exist = false;
                rep(l, c[j]) {
                    if (f[i][k] == f[j][l]) exist = true;
                }
                if (!exist) ok = false;
            }
            if (!ok) continue;
            if (p[i] == p[j] && f[i] == f[j]) continue;
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
