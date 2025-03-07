#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);

    rep(i, h){
        cin >> s.at(i);
    }

    bool isFirst = false;
    int x1, x2, y1, y2;

    rep(i, h){
        rep(j, w){
            if(isFirst == false && s.at(i).at(j) == 'o'){
                isFirst = true;
                y1 = i;
                x1 = j;
            }else if(isFirst == true && s.at(i).at(j) == 'o'){
                y2 = i;
                x2 = j;
            }
        }
    }

    cout << abs(y1 - y2) + abs(x1 - x2) << endl;
}  