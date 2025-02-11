#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n, x;

    cin >> n >> x;
    --x;

    vector<int> a(n);

    rep(i, n){
        cin >> a.at(i);
        --a.at(i);
    }

    vector<bool> known(n);
    int ans = 0;

    while(!known.at(x)){
        known.at(x) = true;
        x = a.at(x);
        ++ans;
    }
    cout << ans << endl;
}