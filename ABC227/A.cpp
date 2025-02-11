#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a;
    cin >> n >> k >> a;

    for(int i = 0; i < k; ++i){
        if(i == 0){
            continue;
        }else{
            a++;
            if(a == n + 1){
                a = 1;
            }
        }
    }

    cout << a << endl;
}