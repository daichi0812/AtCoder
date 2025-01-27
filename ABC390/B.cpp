#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    long long N;
    cin >> N;
    vector<long int> data(N);

    rep(i, N){
        cin >> data.at(i);
    }

    double r = (double)data.at(1) / (double)data.at(0);
    bool result = true;

    for(int i = 1; i < N; i++){
        if(data.at(i) != data.at(i - 1) * r){
            result = false;
            break;
        }
    }

    if(result){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}