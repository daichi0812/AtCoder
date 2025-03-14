#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    vector<int> koma(4);
    int p = 0;

    rep(i, n){
        koma.at(0) = 1;
        rep(j, 4) if(koma.at(j) == 2) koma.at(j)--;
        for(int j = 3; j >= 0; --j){
            int k = j;
            if(koma.at(k) == 1){
                koma.at(k) = 0;
                k += a.at(i);
                if(k > 3){
                    p++;
                }else{
                    koma.at(k) = 2;
                }
            }
        }
    }

    cout << p << endl;
    
}