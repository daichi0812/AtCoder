#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    if (n < 1000) {

    }else if (1000 <= n && n < 10000) {
        n = n - n % 10;
    }else if (10000 <= n && n < 100000) {
        n = n - n % 100;
    }else if (100000 <= n && n < 1000000) {
        n = n - n % 1000;
    }else if (1000000 <= n && n < 10000000) {
        n = n - n % 10000;
    }else if (10000000 <= n && n < 100000000) {
        n = n - n % 100000;
    }else if (100000000 <= n && n < 1000000009) {
        n = n - n % 1000000;
    }

    cout << n << endl;
    return 0;
}