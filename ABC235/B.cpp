#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<int> h(n);
    rep(i, n){
        cin >> h.at(i);
    }

    int c = h.at(0);

    rep(i, n - 1){
        if(c < h.at(i + 1)){
            c = h.at(i + 1);
        }else{
            break;
        }
    }

    cout << c << endl;
}