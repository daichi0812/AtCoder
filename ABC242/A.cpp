#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    double p = 0.0;

    if(x <= a){
        p = 1.0;
    }else if(a + 1 <= x && x <= b){
        p = (double)c / (double)(b - a);
    }else{
        p = 0.0;
    }

    printf("%.10f\n", p);
}