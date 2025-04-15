#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    vector<int> ans(q);
    rep(i, n){
        int l;
        cin >> l;
        a[i].resize(l);
        rep(j, l){
            cin >> a[i][j];
        }
    }

    vector<int> s(q);
    vector<int> t(q);
    rep(i, q){
        cin >> s[i] >> t[i];
        s[i]--;
        t[i]--;
    }

    // rep(i, n){
    //     cout << l[i] << " ";
    //     rep(j, l[i]){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // rep(i, q){
    //     cout << s[i] << " " << t[i] << endl;
    // }

    rep(i, q){
        ans[i] = a[s[i]][t[i]];
        cout << ans[i] << endl;
    }
}