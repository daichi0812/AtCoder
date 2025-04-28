#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }
    vector<string> t(m);
    rep(i, m) {
        cin >> t[i];
    }
    int count = 0;
    rep(i, n) {
        reverse(s[i].begin(), s[i].end());
        string s1 = s[i].substr(0, 3);
        reverse(s[i].begin(), s[i].end());
        reverse(s1.begin(), s1.end());
        bool ok = false;
        rep(j, m) {
            if (s1 == t[j]) {
                ok = true;
            }
        }
        if (ok) {
            count++;
        }
    }
    cout << count << endl;
}