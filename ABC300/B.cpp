#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int h, w;
    cin >> h >> w;
    vector a(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    vector b(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> b[i][j];

    rep(s, h) {
        rep(t, w) {
            vector na = a;
            rep(i, h) rep(j, w) {
                na[(i + s) % h][(j + t) % w] = a[i][j];
            }
            if (na == b) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

}
