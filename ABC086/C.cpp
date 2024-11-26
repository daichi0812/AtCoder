/* 
    Traveling 
- ポイント -
・時間の差の偶奇とx座標、y座標の和の偶奇は一致しないといけない
・x座標の差の絶対値とy座標の差の絶対値の和は時間の差より小さくないといけない

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> time(N);
    vector<vector<int>> point(N, vector<int>(2));
    bool can = true;
    
    for(int i = 0; i < N; i++){
        cin >> time.at(i) >> point.at(i).at(0) >> point.at(i).at(1);
    }

    int dt = 0;
    int dist = 0;

    for(int i = 0; i < N; i++){
        if(i == 0){
                dt = time.at(0);
                dist = point.at(0).at(0) + point.at(0).at(1);
        }
        if(i > 0){
            dist = abs(point.at(i).at(0) - point.at(i - 1).at(0)) 
                    + abs(point.at(i).at(1) - point.at(i - 1).at(1));

            dt = time.at(i) - time.at(i - 1);
        }

        if(dist > dt){
            can = false; 
        }

        if(dt % 2 != dist % 2){
            can = false;
        }
    }

    if(can){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}