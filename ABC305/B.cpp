#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    char p, q;
    cin >> p >> q;
    map<char, int> m;
    m['A'] = 0;
    m['B'] = 3;
    m['C'] = 4;
    m['D'] = 8;
    m['E'] = 9;
    m['F'] = 14;
    m['G'] = 23;
    int P, Q;
    for(auto a : m) {
        auto key = a.first;
        auto v = a.second;
        if (key == p) {
            P = v;
        }
        if (key == q) {
            Q = v;
        }
    }
    cout << abs(P - Q) << endl;
}