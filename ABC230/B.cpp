#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string t;
    rep(i, 10) t += "oxx";

    if(t.find(s) != string::npos){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}