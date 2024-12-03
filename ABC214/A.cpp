/* New Generation ABC */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(0 < N && N <= 125){
        cout << "4" << endl;
    }else if(125 < N && N <= 211){
        cout << "6" << endl;
    }else if(211 < N && N <= 214){
        cout << "8" << endl;
    }
}