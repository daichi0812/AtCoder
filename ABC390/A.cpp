#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n = 5;
    vector<int> A(n);

    rep(i, n){
        cin >> A.at(i);
    }

    int count = 0;

    rep(i, n - 1){
        if(A.at(i) > A.at(i + 1)){
            int tmp = A.at(i);
            A.at(i) = A.at(i + 1);
            A.at(i + 1) = tmp;
            count++;
        }
    }

    if(count == 1){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}