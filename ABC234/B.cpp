#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    rep(i, n){
        cin >> x.at(i) >> y.at(i);
    }

    double mx = 0.0;

    rep(i, n){
        rep(j, n){
            double length = sqrt(pow((x.at(i) - x.at(j)), 2) + pow((y.at(i) - y.at(j)), 2));
            if(mx < length){
                mx = length;
            }
        }
    }

    cout << fixed << setprecision(19) << mx << endl;
}