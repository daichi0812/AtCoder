#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> w(n);
    rep(i, n) cin >> s[i];
    rep(i, n) rep(j, n) {
        if(s[i][j] == 'o') w[i]++;
    }
    vector<int> ans(n);
    rep(i, n) ans[i] = i;
    sort(ans.begin(), ans.end(), [&] (int a, int b) {
        if(w[a] == w[b]) return a < b;
        return w[a] > w[b];
    });
    rep(i, n) cout << ans[i] + 1 << " ";
    cout << endl;

}