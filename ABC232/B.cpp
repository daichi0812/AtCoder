#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int k = 27;
    string s, t;
    cin >> s >> t;
    string ans = "No";

    rep(i, k){
        if(s == t){
            ans = "Yes";
            break;
        }
        rep(j, s.size()){
            if(s.at(j) == 'z'){
                s.at(j) = 'a';
            }else{
                s.at(j) += 1;
            }
        }
    }

    cout << ans << endl;
}