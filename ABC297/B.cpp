#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n = 8;
    string s;
    cin >> s;
    int xb = -1;
    int yb;
    int xk = -1;
    int yk;
    bool flag = false;
    rep(i, n) {
        if (s[i] == 'B') {
            if (xb == -1) {
                xb = i;
            }else {
                yb = i;
            }
        }
        if (s[i] == 'K') {
            if (xk == -1) {
                xk = i;
            }else {
                yk = i;
            }
        }
    }
    rep(i, n) {
        if (s[i] == 'R') {
            if (xk < i && i < yk) {
                flag = true;
            }
        }
    }
    if (flag && (xb + yb) % 2 != 0) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}