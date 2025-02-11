#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, x;
    cin >> s >> t >> x;

    if (s < t)
    {
        if (s <= x && x < t)
        {
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    else
    {
        if(x < t || s <= x){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
}