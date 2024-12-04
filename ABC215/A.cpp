#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    string predict ="Hello,World!";
    string expect;

    cin >> expect;

    if(predict == expect){
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
}