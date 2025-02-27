#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, a, b, c;
    cin >> v >> a >> b >> c;

    while (v >= 0)
    {
        v -= a;
        if (v < 0)
        {
            cout << "F" << endl;
            break;
        }

        v -= b;
        if (v < 0)
        {
            cout << "M" << endl;
            break;
        }

        v -= c;
        if (v < 0)
        {
            cout << "T" << endl;
            break;
        }
    }
}