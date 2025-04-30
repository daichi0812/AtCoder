#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> x(5 * n);
    rep(i, 5 * n) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    double sum = 0.0;
    for (int i = n; i < 4 * n; ++i) {
        sum += x[i];
    }
    double ans = sum / (3 * (double)n);
    printf("%.10f\n", ans);
}