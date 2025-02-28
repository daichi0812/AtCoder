#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    char drct = 'e';

    string t;
    cin >> t;

    rep(i, n){

        if(t.at(i) == 'R' && drct == 'n'){
            drct = 'e';
        }else if(t.at(i) == 'R' && drct == 'e'){
            drct = 's';
        }else if(t.at(i) == 'R' && drct == 's'){
            drct = 'w';
        }else if(t.at(i) == 'R' && drct == 'w'){
            drct = 'n';
        }

        if(t.at(i) == 'S' && drct == 'n'){
            y++;
        }else if(t.at(i) == 'S' && drct == 'e'){
            x++;
        }else if(t.at(i) == 'S' && drct == 's'){
            y--;
        }else if(t.at(i) == 'S' && drct == 'w'){
            x--;
        }
    }

    cout << x << " " << y << endl;
}