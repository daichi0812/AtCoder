#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    double h;
    cin >> h;
    double ans = sqrt(h * (12800000 + h));
    printf("%.9f", ans);
}