#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int a, b, k;
    cin >> a >> b >> k;

    int count = 0;

    while(a < b){
        count++;
        a = a * k;
    }

    cout << count << endl;
}