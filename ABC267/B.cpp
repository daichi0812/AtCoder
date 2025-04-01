#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    string col = "x";
    if(s[6] == '1') col += 'o'; else col += 'x';
    if(s[3] == '1') col += 'o'; else col += 'x';
    if(s[1] == '1' || s[7] == '1') col += 'o'; else col += 'x';
    if(s[0] == '1' || s[4] == '1') col += 'o'; else col += 'x';
    if(s[2] == '1' || s[8] == '1') col += 'o'; else col += 'x';
    if(s[5] == '1') col += 'o'; else col += 'x';
    if(s[9] == '1') col += 'o'; else col += 'x';
    int xo = 0;
    for (int i = 0; i < col.size() - 1; ++i){
        if(col[i] == 'x' && col[i + 1] == 'o') xo++;
    }

    if(s[0] == '0' &&  xo >= 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}