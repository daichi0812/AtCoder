#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int i = 1;
    while (c <= b)
    {
        c = c * i;
        if (a <= c && c <= b)
        {
            cout << c << endl;
            return 0;
        }

        ++i;
    }

    cout << -1 << endl;
}