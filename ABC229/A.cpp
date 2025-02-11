#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int count = 0;
    bool ans = true;

    for(int i = 0; i < 2; ++i){
        if(s1.at(i) == '.') ++count;
        if(s2.at(i) == '.') ++count;
    }

    if(count == 2){
        if(s1.at(0) == '.' && s2.at(1) == '.'){
            ans = false;
        }
        if(s1.at(1) == '.' && s2.at(0) == '.'){
            ans = false;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}