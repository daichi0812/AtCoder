#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> side(n, vector<bool>(n));
    int count = 0;

    rep(i, m) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        side[u][v] = side[v][u] = true;
    }

    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            for(int k = j + 1; k < n; ++k){
                if(side[i][j] and side[i][k] and side[j][k]){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}