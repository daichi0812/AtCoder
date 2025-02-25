#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    set<int> st;

    rep(i, n){
        cin >> a.at(i);

        st.insert(a.at(i));
    }

    cout << st.size() << endl;
}