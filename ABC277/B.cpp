#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<char> ch1 = {'H', 'D', 'C', 'S'};
    vector<char> ch2 = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    vector<bool> flag(n, false);
    rep(i, n) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    rep(i, n) {
        rep(ci, ch1.size()) {
            if (s[i][0] == ch1[ci]) {
                rep(cj, ch2.size()) {
                    if (s[i][1] == ch2[cj]) {
                        flag[i] = true;
                    }
                }
            }
        }
    }
    rep(i, n) {
        if (flag[i] == false) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}