#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    rep(i, n) cin >> c[i];
    vector<string> d(m);
    rep(i, m) cin >> d[i];
    vector<int> p(m + 1);
    rep(i, m + 1) cin >> p[i];
    int sum = 0;
    rep(ni, n){
        bool mc = false;
        rep(mi, m){
            if(c[ni] == d[mi]){
                sum += p[mi + 1];
                mc = true;
            }
        }
        if(!mc) sum += p[0];
    }
    cout << sum << endl;
}