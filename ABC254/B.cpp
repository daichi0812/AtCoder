#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    rep(i, n){
        for(int j = 0; j <= i; ++j){
            if(j == 0 || i == j){
                a.at(i).at(j) = 1;
            }else{
                a.at(i).at(j) = a.at(i - 1).at(j - 1) + a.at(i - 1).at(j);
            }
            cout << a.at(i).at(j) << " ";
        }
        cout << endl;
    }


}