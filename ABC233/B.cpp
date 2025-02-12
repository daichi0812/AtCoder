#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int l, r;
    cin >> l >> r;
    l--;
    r--;

    string s;
    cin >> s;

    string b = s.substr(l, r - l + 1);

    reverse(b.begin(), b.end());

    int k = 0;
    for(int i = l; i <= r; ++i){
        s.at(i) = b.at(k);
        k++;
    }

    cout << s << endl;
}