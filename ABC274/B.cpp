#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    rep(i, h){
        rep(j, w){
            cin >> c[i][j];
        }
    }

    vector<int> x(w);
    
    rep(i, h){
        rep(j, w){
            if(c[i][j] == '#'){
                x[j]++;
            }
        }
    }

    rep(j, w){
        cout << x[j] << " ";
    }
    cout << endl;
}