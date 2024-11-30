/* Bitwise Exclusive Or */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    vector<int> binaryA(8);
    vector<int> binaryB(8);
    vector<int> binaryC(8);
    int result = 0;
    int e = 8;

    for(int i = 7; i >= 0; i--){
        binaryA.at(i) = A % 2;
        A = A / 2;
        binaryB.at(i) = B % 2;
        B = B / 2; 

        if(binaryA.at(i) != binaryB.at(i)){
            binaryC.at(i) = 1;
        } else {
            binaryC.at(i) = 0;
        }

        result += binaryC.at(i) * pow(2, (e - (i + 1)));
    }

    cout << result << endl;
}