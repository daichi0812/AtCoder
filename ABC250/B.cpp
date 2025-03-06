#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0;  i < (n); ++i)
using ll = long long;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    vector<vector<char>> cood(n * a, vector<char>(n * b));

    int row = n * a;
    int col = n * b;

    rep(i, row){
        rep(j, col){
            if((i / a) % 2 == 0){
                if((j / b) % 2 == 0){
                    cood.at(i).at(j) = '.';
                }else if((j / b) % 2 == 1){
                    cood.at(i).at(j) = '#';
                }
            }else if((i / a) % 2 == 1){
                if((j / b) % 2 == 0){
                    cood.at(i).at(j) = '#';
                }else if((j / b) % 2 == 1){
                    cood.at(i).at(j) = '.';
                }
            }
        }
    }

    rep(i, row){
        rep(j, col){
            cout << cood.at(i).at(j);
        }
        cout << endl;
    }
}