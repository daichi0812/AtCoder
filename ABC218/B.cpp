#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 26;
    vector<int> data(n);

    for(int i = 0; i < n; ++i){
        cin >> data.at(i);
    }

    vector<tuple<int, char>> tuples;

    for(int i = 0; i < n; ++i){
        tuples.push_back(make_tuple(i + 1, 'a' + i));
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; j++){
            if(data.at(i) == get<0>(tuples.at(j))){
                cout << get<1>(tuples.at(j));
            }
        }
    }

    cout << endl;
}