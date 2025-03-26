#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    bool isCorrect = true;

    rep(i, n){
        rep(j, n){
            cin >> a[i][j];
        }
    }

    rep(i, n){
        for(int j = i + 1; j < n; ++j){
            if(a[i][j] == 'W'){
                if(a[j][i] != 'L'){
                    isCorrect = false;
                }
            }
            if(a[i][j] == 'L'){
                if(a[j][i] != 'W'){
                    isCorrect = false;
                }
            }
            if(a[i][j] == 'D'){
                if(a[j][i] != 'D'){
                    isCorrect = false;
                }
            }
        }
    }

    if(isCorrect){
        cout << "correct" << endl;
    }else{
        cout << "incorrect" << endl;
    }
}