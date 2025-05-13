#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    while(1){
        bool ok = true;
        rep(i, a.size() - 1){
            if(abs(a[i]-a[i+1]) != 1){
                ok = false;
                if(a[i] < a[i+1]){
                    int j = i + 1, r = a[i + 1];
                    for(int x = a[i] + 1; x < r; ++x){
                        a.insert(a.begin() + j, x);
                        ++j;
                    }
                }else if(a[i] > a[i+1]){
                    int j = i + 1, r = a[i+1];
                    for(int x = a[i] - 1; x > r; --x){
                        a.insert(a.begin() + j, x);
                        ++j;
                    }
                }
            }
        }
        if(ok) break;
    }
    rep(i, a.size()){
        cout << a[i] << " ";
    }
    cout << endl;
}