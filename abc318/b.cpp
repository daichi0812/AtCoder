#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector m(100, vector<int>(100));
    rep(ni, n){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int i = c; i < d; ++i){
            for(int j = a; j < b; ++j){
                m[i][j] = true;
            }
        }
    }
    int ans = 0;
    rep(i, 100){
        rep(j, 100){
            if(m[i][j]){
                ++ans;
            }
        }
    }
    cout << ans << endl;
}