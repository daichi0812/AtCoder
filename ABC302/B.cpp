#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)

int main() {
    int h, w;
    cin >> h >> w;
    vector s(h, vector<char>(w));
    vector<char> a = {'s', 'n', 'u', 'k', 'e'};
    vector<int> di = {1, 1, 0, -1, -1, -1, 0, 1};
    vector<int> dj = {0, 1, 1, 1, 0, -1, -1, -1};
    rep(i, h)
        rep(j, w) cin >> s[i][j];

    rep(i, h) {
        rep(j, w) {
            rep(v, 8) {
                int si = i, sj = j;
                if (s[si][sj] == 's') {
                    rep(k, 5) {
                        if (si < 0 || h <= si || sj < 0 || w <= sj) break;
                        if (s[si][sj] != a[k]) break;
                        si += di[v];
                        sj += dj[v];
                        if (k == 4) {
                            si = i;
                            sj = j;
                            rep(l, 5) {
                                cout << si + 1 << " " << sj + 1 << endl;;
                                si += di[v];
                                sj += dj[v];
                            }
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
