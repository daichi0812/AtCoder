/* Bitwise Exclusive Or */
// 解説見たら鬼簡単だった
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int C = A ^ B;  // 「^」でビット演算 XOR をできるらしい
    cout << C << endl;
}