#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int a, b;
    cin >> a >> b;

    double ab = sqrt(a * a + b * b);
    double x = a / ab;
    double y = b / ab;

    cout << fixed << setprecision(10) << x << " " << y << endl;
}