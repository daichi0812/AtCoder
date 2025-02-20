#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<int> a(n + 1);
    int m = 4 * n - 1;

    rep(i, m){
        int c;
        cin >> c;
        a.at(c)++;
    }

    for(int i = 1; i <= n; ++i){
        if(a.at(i) == 3){
            cout << i << endl;
        }
    }
    
}