#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int x;
    cin >> x;

    if(x >= 100 && x % 100 == 0){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}