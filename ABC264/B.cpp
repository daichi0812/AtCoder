#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    // チェス盤距離
    if(max(abs(r - 8), abs(c - 8)) % 2 == 0){
        cout << "white" << endl;
    }else{
        cout << "black" << endl;
    }
    
}