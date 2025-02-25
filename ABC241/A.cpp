#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(10);

    for(int i = 0; i < 10; ++i) cin >> a.at(i);

    int ans = 0;

    for(int i = 0; i < 3; ++i){
        ans = a.at(ans);
    }

    cout << ans << endl;
}