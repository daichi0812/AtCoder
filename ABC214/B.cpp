#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n = 1000;
    int s, t;
    bool isUnderS = false;
    bool isUnderT = false;
    int count = 0;
    cin >> s >> t;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            for(int k = 0; k < n; ++k){
                if(i + j + k <= s){
                    isUnderS = true;
                }
                if(i * j * k <= t){
                    isUnderT = true;
                }
                if(isUnderS == true && isUnderT == true){
                    count++;
                    isUnderS = false;
                    isUnderT = false;
                }
            }
        }
    }

    cout << count << endl;
    
}