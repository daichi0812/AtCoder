#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n = 8;
    vector<string> s(8);
    vector<char> w = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    vector<char> h = {'8', '7', '6', '5', '4', '3', '2', '1'};
    rep(i, n) {
        cin >> s[i];
        rep(j, n) {
            if (s[i][j] == '*') {
                cout << w[j] << h[i];
            }
        }
    }

}