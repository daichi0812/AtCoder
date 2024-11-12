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

    sort(diameter.begin(), diameter.end(), greater<int>());

    int result = 0;

    for(int i = 0; i < N; i++){
        if(i == 0){
            result += 1;
        } else {
            if(diameter.at(i - 1) != diameter.at(i)){
                result += 1;
            }
        }
    }

    cout << result << endl;
}