#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);

    rep(i, n){
        cin >> s.at(i) >> t.at(i);
    }

    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(s.at(i) == s.at(j) && t.at(i) == t.at(j)){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}