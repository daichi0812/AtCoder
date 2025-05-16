#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector a(m, vector<int>(n));
    rep(i, m) rep(j, n) {
        cin >> a[i][j];
        a[i][j]--;
    }
    vector b(n, vector<bool>(n));

    rep(i, m) {
        rep(j, n - 1) {
            b[a[i][j]][a[i][j]] = true;
            b[a[i][j]][a[i][j+1]] = true;
            b[a[i][j+1]][a[i][j]] = true;
        }
    }
    int count = 0;
    rep(i, n) {
        rep(j, n) {
            if (b[i][j] == false) {
                count++;
            }
        }
    }
    cout << count / 2 << endl;
}