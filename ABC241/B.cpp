#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    rep(i, n) cin >> a.at(i);
    rep(i, m) cin >> b.at(i);

    int count = 0;

    rep(i, m){
        rep(j, n){
            if(b.at(i) == a.at(j)){
                a.at(j) = 0;
                count++;
                break;
            }
        }
    }

    if(m == count){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}