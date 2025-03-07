#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    set<int> count;

    rep(i, n){
        if(a.at(i) <= w){
            count.insert(a.at(i));
        }
        for(int j = i; j < n; ++j){
            if(i != j && a.at(i) + a.at(j) <= w){
                count.insert(a.at(i) + a.at(j));
            }
            for(int k = j; k < n; ++k){
                if(i != j && i != k && j != k && a.at(i) + a.at(j) + a.at(k) <= w){
                    count.insert(a.at(i) + a.at(j) + a.at(k));
                }
            }
        }
    }

    cout << count.size() << endl;
}