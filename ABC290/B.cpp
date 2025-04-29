#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, k;
    cin >> n >> k;
    vector<char> s(n);
    rep(i, n) cin >> s[i];

    vector<char> t(n);
    int up = 0;
    rep(i, n) {
        if (s[i] == 'o' && up < k) {
            t[i] = 'o';
            ++up;
        }else {
            t[i] = 'x';
        }
        cout << t[i];
    }
    cout << endl;
}