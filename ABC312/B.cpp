#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector s(n, vector<char>(m));
    rep(i, n) rep(j, m) cin >> s[i][j];

    rep(i, n) rep(j, m) {
        if (i + 9 > n || j + 9 > m) continue;
        bool ok1 = true;
        rep(k, 3) rep(l, 3) {
            if (s[i + k][j + l] != '#') ok1 = false;
            if (s[i + k + 6][j + l + 6] != '#') ok1 = false;
        }
        if (!ok1) continue;
        bool ok2 = true;
        rep(k, 4) {
            if (s[i + 3][j + k] != '.' || s[i + k][j + 3] != '.') ok2 = false;
            if (s[i + 5][j + 5 + k] != '.' || s[i + 5 + k][j + 5] != '.') ok2 = false;
        }
        if (!ok2) continue;
        cout << i + 1 << " " << j + 1 << endl;
    }
}