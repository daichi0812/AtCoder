#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    double PI = 3.14159265;
    int a, b, d;
    cin >> a >> b >> d;

    double x = a * cos(d * PI / 180) - b * sin(d * PI / 180);
    double y = a * sin(d * PI / 180) + b * cos(d * PI / 180);

    printf("%10f %10f\n", x, y);
}