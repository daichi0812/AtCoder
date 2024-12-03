#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> data(n);
    rep(i, n) cin >> data.at(i).first;
    rep(i, n) data.at(i).second = i + 1;
    sort(data.rbegin(), data.rend());
    cout << data.at(1).second << endl;
    return 0; 
}