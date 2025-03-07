#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    vector<int> b(k);
    rep(i, k) cin >> b.at(i);

    bool possibility = false;

    int mx = 0;
    rep(i, n){
        mx = max(mx, a.at(i));
    }

    rep(i, n){
        if(a.at(i) == mx){
            rep(j, k){
                if(i + 1 == b.at(j)){
                    possibility = true;
                }
            }
        }
    }

    if(possibility){
        cout << "Yes" << endl;
    }else{
        cout << "No" <<endl;
    }

}