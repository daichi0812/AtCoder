#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;
    int count = 0;

    rep(i, n){
        if(s[i] != t[i]){
            count++;
        }
    }

    cout << count << endl;
}