#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    string ans(n+1, '-');
    for(int j = 9; j >= 1; --j){
        if(n % j != 0) continue;
        for(int i = 0; i < n + 1; i += n / j){
            ans[i] = '0' + j;
        }
    }
    cout << ans << endl;
}