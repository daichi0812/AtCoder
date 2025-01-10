#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k, a, b;
    cin >> k >> a >> b;

    long long da = 0;
    long long db = 0;

    for(int i = 0; a > 0; i++){
        da += (a % 10) * pow(k, i);
        a = a / 10;
    }

    for(int i = 0; b > 0; i++){
        db += (b % 10) * pow(k, i);
        b = b / 10;
    }

    cout << da * db << endl;
}