#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int count = 0;

    while(x < y){
        x += 10;
        count++;
    }

    cout << count << endl;
}