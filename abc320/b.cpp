#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    int mx = 0;
    rep(i, s.size()){
        rep(j, s.size() - i + 1){
            string sn = s.substr(i, j);
            string snn = sn;
            reverse(snn.begin(), snn.end());
            if(sn == snn){
                int a = sn.size();
                mx = max(mx, a);
            }
        }
    }
    cout << mx << endl;
}