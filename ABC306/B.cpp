#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ull = unsigned long long;

int main() {
    int n = 64;
    ull ans = 0;
    rep(i, n) {
        int v;
        cin >> v;
        ans += v * ((ull)1 << i);
    }
    cout << ans << endl;
}