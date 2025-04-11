#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    vector<string> s(10);

    rep(i, 10){
        cin >> s[i];
    }

    int a = 10, b = 0, c = 10, d = 0;
    int mn = 10, mx = 0;

    rep(i, 10){
        rep(j, 10){
            if(s[i][j] == '#'){
                a = min(a, i);
                b = max(b, i);
                c = min(c, j);
                d = max(d, j);
            }
        }
    }

    cout << a + 1 << " " << b + 1 << endl;
    cout << c + 1 << " " << d + 1 << endl;
}