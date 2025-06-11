#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int ans = -1;
    rep(i, n - 1) cin >> a[i];
    for (int k = 0; k <= 100; ++k)
    {
        int sum = 0;
        a[n - 1] = k;
        vector<int> aa = a;
        sort(aa.begin(), aa.end());
        rep(i, n - 2) sum += aa[i + 1];
        if (sum >= x)
        {
            ans = k;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}