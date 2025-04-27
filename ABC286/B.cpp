#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    string s;
    cin >> n >> s;
    string sa;
    rep(i, n) {
        if (i < n - 1) {
            if (s[i] == 'n' && s[i + 1] == 'a') {
                sa.push_back('n');
                sa.push_back('y');
                sa.push_back('a');
                i++;
            } else {
                sa.push_back(s[i]);
            }
        }else {
            sa.push_back(s[i]);
        }
    }
    cout << sa << endl;
}
