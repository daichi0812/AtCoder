/*
    Alloy
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A = 0;
    int B = 0;

    cin >> A >> B;

    if(A > 0 && B == 0){
        cout << "Gold" << endl;
    }else if(A > 0 && B > 0){
        cout << "Alloy" << endl;
    }else if(A == 0 && B > 0){
        cout << "Silver" << endl;
    }
}