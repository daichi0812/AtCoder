#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    vector<int> x(n);
    rep(i, n) cin >> w[i] >> x[i];
    int mx = 0;
    rep(i, 24){
        int s = i;
        int p = 0;
        rep(j, n){
            if(9 <= (s + x[j]) % 24 && (s + x[j]) % 24 < 18){
                p += w[j];
            }
        }
        mx = max(mx, p);
    }
    cout << mx << endl;
}