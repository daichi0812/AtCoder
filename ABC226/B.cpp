#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    set<vector<int>> set;
    
    rep(i, n){
        cin >> l.at(i);
        vector<int> a(l.at(i));

        rep(j, l.at(i)){
            cin >> a.at(j);
        }

        set.insert(a);
    }

    cout << set.size() << endl;
}