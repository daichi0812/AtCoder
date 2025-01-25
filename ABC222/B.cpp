#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int N, P;
    cin >> N >> P;
    vector<int> score(N);

    int result = 0;

    rep(i, N){
        cin >> score.at(i);
        
        if (score.at(i) < P){
            result++;
        }
    }

    cout << result << endl;
}