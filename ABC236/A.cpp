#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    a--;
    b--;

    char ac = s.at(a);
    char bc = s.at(b);

    s.at(a) = bc;
    s.at(b) = ac;

    cout << s << endl;
}