#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int r = 1;
    vector<int> ans(n);
    int rank = 1;
    

    rep(k, n){
        int mx = -1;
        rep(i, n){
            mx = max(mx, p[i]);
        }
        int count = 0;
        rep(i, n){
            if(mx == p[i] && p[i] > 0){
                ans[i] = rank;
                p[i] = 0;
                count++;
            }
        }
        rep(i, count){
            rank++;
        }
    }

    rep(i, n){
        cout << ans[i] << endl;
    }
}