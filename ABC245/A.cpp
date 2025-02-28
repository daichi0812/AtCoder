#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    string t = "Takahashi";
    string ak = "Aoki";

    if(a < c){
        cout << t << endl;
    }else if(a > c){
        cout << ak << endl;
    }else if(a == c){
        if(b <= d){
            cout << t << endl;
        }else{
            cout << ak << endl;
        }
    }
}