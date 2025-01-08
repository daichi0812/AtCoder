#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.at(n - 1) == 'o'){
        cout << "Yes" << endl;
    } else if (s.at(n - 1) == 'x'){
        cout << "No" << endl;
    }
}