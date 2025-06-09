#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int m;
    cin >> m;
    vector<int> d(m);
    int totalDays = 0;
    rep(i, m) {
        cin >> d[i];
        totalDays += d[i];
    }
    int half = (totalDays + 1) / 2;
    int a = 0;
    int b = 0;
    rep(i, m){
        if(d[i] >= half){
            a = i + 1;
            b = half;
            break;
        }
        half -= d[i];
    }
    cout << a << " " << b << endl;
}