#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 42){
        cout << "AGC" << setfill('0') << setw(3) << n << endl;
    }else if(n < 100){
        cout << "AGC" << setfill('0') << setw(3) << n + 1 << endl;
    }else{
        cout << "AGC" << n + 1 << endl;
    }
}