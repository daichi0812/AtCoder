#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    a = a - b;
    int result = pow(32, a);

    cout << result << endl;
}