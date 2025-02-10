#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> deg(n);

    rep(i, n - 1){
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        deg.at(a)++;
        deg.at(b)++;
    }

    rep(i, n){
        if(deg.at(i) == n - 1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

}