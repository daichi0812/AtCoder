#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    set<int> st;
    rep(i, n) {
        int a;
        cin >> a;
        st.insert(a);
    }
    for(int i = *begin(st); i <= *rbegin(st); ++i){
        if(st.count(i)){
            continue;
        }else{
            cout << i << endl;
            return 0;
        }
    }
}