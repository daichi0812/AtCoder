#include <bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin >> x;

    int xd = (int)x;
    int round1 = (x - xd) * 10;

    if(round1 >= 5){
        cout << xd + 1 << endl;
    }else {
        cout << xd << endl;
    }
}