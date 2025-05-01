#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)

int main() {
    int n;
    cin >> n;
    vector<bool> a(n);
    rep(i, n) {
        int b;
        cin >> b;
        b--;
        if (!a[i]) {
            a[b] = true;
        }
    }
    vector<int> x;
    int k = 0;
    rep(i, n) {
        if (!a[i]) {
            ++k;
            x.push_back(i);
        }
    }
    sort(x.begin(), x.end());
    cout << k << endl;
    rep(i, k) {
        cout << x[i] + 1 << " ";
    }
    cout << endl;
}