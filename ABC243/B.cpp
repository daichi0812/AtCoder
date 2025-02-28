#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);
    
    int ans1 = 0;
    int ans2 = 0;

    rep(i, n){
        if(a.at(i) == b.at(i)){
            ans1++;
        }else{
            rep(j, n){
                if(a.at(i) == b.at(j)){
                    ans2++;
                }
            }
        }
    }

    cout << ans1 << endl << ans2 << endl;
}   