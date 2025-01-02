#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> text = {"ABC", "ARC", "AGC", "AHC"};
    vector<string> s(3);

    for(int i = 0; i < 3; ++i){
        cin >> s.at(i);
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                if(s.at(i) == text.at(1) && s.at(j) == text.at(2) && s.at(k) == text.at(3)){
                    cout << text.at(0) << endl;
                }
                if(s.at(i) == text.at(0) && s.at(j) == text.at(2) && s.at(k) == text.at(3)){
                    cout << text.at(1) << endl;
                }
                if(s.at(i) == text.at(0) && s.at(j) == text.at(1) && s.at(k) == text.at(3)){
                    cout << text.at(2) << endl;
                }
                if(s.at(i) == text.at(0) && s.at(j) == text.at(1) && s.at(k) == text.at(2)){
                    cout << text.at(3) << endl;
                }
            }
        }
    }
}