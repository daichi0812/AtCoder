#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> data(N);
    map<int, int> map;

    for(int i = 0; i < N; i++){
        cin >> data.at(i);
        map[i] = data.at(i);
    }

    sort(data.begin(), data.end());

    for(auto result : map){

        if(result.second == data.at(N - 2)){
            cout << result.first + 1 << endl;
        }
    }
    
}