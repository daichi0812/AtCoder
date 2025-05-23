#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    bool ok = false;
    rep(i, n) {
        rep(j, n) {
            if (i != j) {
                string cs = s[i] + s[j];
                string sc = cs;
                bool isR = true;
                rep(k, cs.size()) {
                    if (cs[k] != cs[cs.size() - 1 - k]) isR = false;
                }
                if (isR) ok = true;
            }
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
