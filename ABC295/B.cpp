#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> b(r, vector<char>(c));
    vector<vector<char>> ba(r, vector<char>(c));
    rep(i, r) {
        rep(j, c) {
            cin >> b[i][j];
            ba[i][j] = b[i][j];
        }
    }
    rep(i, r) {
        rep(j, c) {
            if (b[i][j] != '.' && b[i][j] != '#') {
                rep(y, r) {
                    rep(x, c) {
                        if (abs(i - y) + abs(j - x) <= b[i][j] - '0') {
                            ba[y][x] = '.';
                        }
                    }
                }
            }
        }
    }
    rep(i, r) {
        rep(j, c) {
            cout << ba[i][j];
        }
        cout << endl;
    }
}