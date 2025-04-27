#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    string s;
    cin >> n >> s;

    for (int i = 1; i < n; ++i) {
        int l = 0;
        for (int k = 0; k + i < n; ++k) {
            if (s[k] == s[k + i]) {
                break;
            }
            l = k + 1;
        }
        cout << l << endl;
    }
}
