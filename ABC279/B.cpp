#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    string s;
    string t;
    cin >> s >> t;
    string t1 = t + t;
    rep(i, s.size()) {
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
        if (i < s.size() - t.size() + 1) {
            string s1 = s.substr(i, t.size());
            if (s1 == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}