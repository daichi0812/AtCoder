#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c = n % 10;
    n = n / 10;
    int b = n % 10;
    n = n / 10;
    int a = n % 10; 

    int abc = 100 * a + 10 * b + c;
    int bca = 100 * b + 10 * c + a;
    int cab = 100 * c + 10 * a + b;

    int ans = abc + bca + cab;

    cout << ans << endl;
}