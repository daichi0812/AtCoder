#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int ans = -1;

    if(y < 0){
        x = -x;
        y = -y;
        z = -z;
    }

    if(x < y) {
        ans = abs(x);
    }else if(z < y){
        ans = abs(z) + abs(x - z);        
    }

    cout << ans << endl;
}