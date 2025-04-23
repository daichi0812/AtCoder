#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > p(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        p[a].push_back(b);
        p[b].push_back(a);
    }

    rep(i, n) {
        sort(p[i].begin(), p[i].end());
        int d = p[i].size();
        cout << d << " ";
        rep(j, d) {
            cout << p[i][j] + 1 << " ";
        }
        cout << endl;
    }
}
