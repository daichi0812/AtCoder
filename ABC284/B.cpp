#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int t;
    cin >> t;

    rep(ti, t){
        int n;
        cin >> n;
        vector<int> a(n);
        int odd = 0;
        rep(i, n) {
            cin >> a[i];
            if(a[i] % 2 != 0){
                odd++;
            }
        }
        cout << odd << endl;
    }
}