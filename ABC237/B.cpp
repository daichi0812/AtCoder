#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(h, vector<int>(w));

    rep(i, h){
        rep(j, w){
            cin >> a.at(i).at(j);
        }
    }

    int th = w;
    int tw = h;

    vector<vector<int>> b(th, vector<int>(tw));

    rep(i, th){
        rep(j, tw){
            b.at(i).at(j) = a.at(j).at(i);
            cout << b.at(i).at(j) << " ";
        }
        cout << endl;
    }
}