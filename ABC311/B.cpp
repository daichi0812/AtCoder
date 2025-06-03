#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int count = 0;
    int ans = 0;
    rep(i, d) {
        bool ok = true;
        rep(j, n) {
            if (s[j][i] == 'x') ok = false;
        }
        if (ok) {
            ++count;
            ans = max(ans, count);
        }else{
            count = 0;
        }
    }
    cout << ans << endl;
}