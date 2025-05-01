#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    vector<vector<char>> s(h, vector<char>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
            if(a[i][j] == 0){
                s[i][j] = '.';
            }else{
                s[i][j] = 64 + a[i][j];
            }
            cout << s[i][j];
        }
        cout << endl;
    }
}