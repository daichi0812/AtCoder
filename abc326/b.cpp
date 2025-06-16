#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool r = true;
    while(r){
        int i = n;
        int c = i % 10;
        i = i / 10;
        int b = i % 10;
        i = i / 10;
        int a = i % 10;
        if(a * b == c){
            r = false;
        }else{
            ++n;
        }
    }
    cout << n << endl;
}