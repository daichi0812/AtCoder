/*
    Weak Password
    -ポイント-
    ・各桁を取り出す
        ・10で割った余り（１の位から取り出される）
        ・10で割った商を割る数に代入する
        ・上記を繰り返す
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    bool result = true;

    vector<int> X(4);
    for(int i = 0; i < 4; i++){
        X.at(i) = num % 10;
        num = num / 10;
    }

    reverse(X.begin(), X.end());

    int count = 0;
    int sameNumCount = 0;
    for(int i = 0; i < 3; i++){
        if(X.at(i) == X.at(i + 1)){
            sameNumCount++;
        }

        if(X.at(i) == 9 && X.at(i + 1) == 0){
            count++;
        }else if(X.at(i) + 1 == X.at(i + 1)){
            count++;
        }
    }

    if(count == 3 || sameNumCount == 3){
        result = false;
    }

    if(result){
        cout << "Strong" << endl;
    }else{
        cout << "Weak" << endl;
    }
}