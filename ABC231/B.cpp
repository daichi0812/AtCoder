#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    map<string, int> mp;

    rep(i, n){
        string s;
        cin >> s;

        if(mp.find(s) == mp.end()){
            mp.insert({s, 0});
        }
        mp.at(s)++;
    }

    int mx = 0;

    for(auto p : mp){
        mx = max(p.second, mx);
    }

    for(auto p : mp){
        if(p.second == mx){
            cout << p.first << endl;
        }
    }

}