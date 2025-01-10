#include <bits/stdc++.h>
using namespace std;

long long convertToDecimal(string str, int k){
    long long decimal = 0;
    for(char c : str){
        decimal = decimal * k + (c - '0');
    }
    return decimal;
}

int main(){
    long long k;
    string a_str, b_str;
    cin >> k >> a_str >> b_str;

    long long da = convertToDecimal(a_str, k);
    long long db = convertToDecimal(b_str, k);

    cout << da * db << endl;
}