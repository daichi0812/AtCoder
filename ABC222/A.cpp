#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;

    if (N.size() == 1){
        N = "000" + N;
    } else if (N.size() == 2){
        N = "00" + N;
    } else if (N.size() == 3){
        N = "0" + N;
    }

    cout << N << endl;
}