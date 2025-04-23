#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    vector<int> a(n);
    rep(i, n) {
        a[i] = s[i];
        rep(j, i) {
            a[i] -= a[j];
        }
        cout << a[i] << " ";
    }
    cout << endl;
}
