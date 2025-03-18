#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k);
    vector<int> l(q);
    rep(i, k) cin >> a.at(i);
    rep(i, q){
        cin >> l.at(i);
        l.at(i)--;
    } 

    rep(i, q){
        if(a.at(l.at(i)) != n){
            bool isRight = false;
            rep(j, k){
                if(a.at(j) == a.at(l.at(i)) + 1){
                    isRight = true;
                }
            }
            if(!isRight){
                a.at(l.at(i)) += 1;
            }
        }
    }

    rep(i, k){
        cout << a.at(i) << " ";
    }
    cout << endl;
}