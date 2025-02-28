#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int mx = 0;
    int x = 0;

    rep(i, n){
        rep(j, n){
            if(x == a.at(j)){
                x++;
            }
        }
    }

    if(x != 0){
        cout << x << endl;
    }else{
        cout << 0 << endl;
    }
}