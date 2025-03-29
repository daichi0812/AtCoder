#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;



int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> side(n, vector<bool>(n));

    rep(i, m){
        int u, v;
        cin >> u;
        cin >> v;
        u--;
        v--;

        side[u][v] = side[v][u] = true;
    }


}