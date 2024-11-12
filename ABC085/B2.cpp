/* title: Kagami Mochi */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> diameter(N);
    for(int i = 0; i < N; i++){
        cin >> diameter.at(i);
    }

    // セット関数を用いる
    // 重複のない要素を効率的に管理し、昇順で格納
    set<int> set;

    for(int i = 0; i < N; i++){
        set.insert(diameter.at(i));
    }

    cout << set.size() << endl;
}