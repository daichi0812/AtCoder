#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<string> a(k);
    rep(i, k) {
        a[i] = s[i];
    }
    sort(a.begin(), a.end());
    rep(i, k) {
        cout << a[i] << endl;
    }
}