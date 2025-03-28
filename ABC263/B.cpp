#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    n--;
    vector<int> p(n);
    int count = 1;
    rep(i, n) {
        cin >> p[i];
    }
    int loop = p[n - 1];

    while(loop != 1){
        count++;
        loop = p[loop - 2];
    }

    cout << count << endl;

}