#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    string tp = t.substr(0, n);
    string tt = t;
    reverse(tt.begin(), tt.end());
    string ts = tt.substr(0, n);
    reverse(ts.begin(), ts.end());
    int ans = 0;

    if(s == tp && s == ts){
        ans = 0;
    }else if(s == tp){
        ans = 1;
    }else if(s == ts){
        ans = 2;
    }else{
        ans = 3;
    }
    cout << ans << endl;
}