#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a, b;
    cin >> a >> b;
    string ans = "Easy";

    while(1){
        int s, t;
        s = a % 10;
        a = a / 10;
        t = b % 10;
        b = b / 10;

        if(s + t >= 10){
            ans = "Hard";
        }

        if(a < 10 || b < 10){
            break;
        }
    }

    cout << ans << endl;
}