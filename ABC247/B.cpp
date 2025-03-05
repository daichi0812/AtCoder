#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    bool result = true;

    vector<vector<string>> st(n, vector<string>(2));

    rep(i, n){
        cin >> st.at(i).at(0) >> st.at(i).at(1);
    }

    rep(s, n){
        rep(t, n){
            if(s != t){
                if(st.at(s).at(0) == st.at(t).at(0) || st.at(s).at(0) == st.at(t).at(1)){
                    rep(u, n){
                        if(s != u){
                            if(st.at(s).at(1) == st.at(u).at(0) || st.at(s).at(1) == st.at(u).at(1)){
                                result = false;
                            }
                        }
                    }
                }
            }
        }
    }

    if(result){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}