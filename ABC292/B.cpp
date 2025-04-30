#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> x(n + 1);
    rep(i, q) {
        int c, p;
        cin >> c >> p;
        if (c == 1) {
            x[p]++;
        }
        if (c == 2) {
            x[p] += 2;
        }
        if (c == 3) {
            if (x[p] >= 2) {
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }
    }
}