#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int h, m;
    cin >> h >> m;
    int a, b, c, d;
    while (1) {
        if (h >= 10) {
            a = h / 10;
            b = h % 10;
        }else {
            a = 0;
            b = h;
        }
        if (m >= 10) {
            c = m / 10;
            d = m % 10;
        }else {
            c = 0;
            d = m;
        }
        int ib = c;
        int ic = b;
        if (a * 10 + ib <= 23 && ic * 10 + d <= 59) {
            cout << a * 10 + b << " " << c * 10 + d << endl;
            return 0;
        }
        m++;
        if (m >= 60) {
            m = 0;
            h++;
            if (h >= 24) {
                h = 0;
            }
        }
    }
}
