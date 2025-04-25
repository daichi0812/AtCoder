#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;
    if (65 <= s[0] && s[0] <= 90) {
        if(s[1] < 48 || 57 < s[1] ){
            cout << "No" << endl;
            return 0;
        }
        string t = s.substr(1, 6);
        int it = stoi(t);
        if (100000 <= it && it <= 999999) {
            int l = s.size() - 1;
            if (65 <= s[l] && s[l]<= 90) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}