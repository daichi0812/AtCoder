#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    long long n;
    long long val = 1;
    cin >> n;

    rep(i, 100){
        if(n < val){
            cout << i - 1 << endl;
            break;
        }
        val *= 2;
    }
}