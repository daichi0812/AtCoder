#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    string result = "No";

    if(s == t){
        result = "Yes";
    }

    for(int i = 0; i < s.size() - 1; ++i){
        char u = s.at(i);
        s.at(i) = s.at(i + 1);
        s.at(i + 1) = u;

        if(s == t){
            result = "Yes";
        }else{
            char v = s.at(i + 1);
            s.at(i + 1) = s.at(i);
            s.at(i) = v;
        }
    } 

    cout << result << endl;
}