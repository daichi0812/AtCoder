#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c, num, result;
    cin >> a >> b >> c >> num;

    for(int i = 0; i < num.size(); ++i){
        if (num.at(i) == '1'){
            result += a;
        } else if (num.at(i) == '2'){
            result += b;
        } else if (num.at(i) == '3'){
            result += c;
        }
    }

    cout << result << endl;
}