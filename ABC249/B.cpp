#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool isUppercase = false;
    bool isDowncase = false;
    bool isDifferent = false;
    set<char> st;

    rep(i, s.size()){
        st.insert(s.at(i));
        if(65 <= s.at(i) && s.at(i) <= 90){
            isUppercase = true;
        }
        if(97 <= s.at(i) && s.at(i) <= 122){
            isDowncase = true;
        }
    }

    if(st.size() == s.size()){
        isDifferent = true;
    }

    if(isUppercase && isDowncase && isDifferent){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}