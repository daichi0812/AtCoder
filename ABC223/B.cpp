#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;

    string mn = s;
    string mx = s;
    int n = s.size();

    rep(i, n){
        mn = min(mn, s);
        mx = max(mx, s);

        s.push_back(s.at(0));
        s.erase(s.begin());
    }

    cout << mn << endl;
    cout << mx << endl;
}