#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    bool ans = true;

    for(int i = 0; i < n; ++i){
        cin >> a.at(i);
        if(i > 0){
            if(a.at(i - 1) >= a.at(i)){
                ans = false;
            }
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}