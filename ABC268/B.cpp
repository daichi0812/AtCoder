#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    string s, t;
    cin >> s >> t;
    int size = s.size();
    string s2;

    rep(i, size){
        s2 += t[i];
    }

    if(s == s2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}