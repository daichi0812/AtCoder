#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> s(n, vector<char>(n));

    for(int i = 0; i < n; ++i)
    {
        int j = n - 1 - i;

        if (i <= j)
        {
            if (i % 2 != 0)
            {
                for(int t = i; t <= j; ++t)
                {
                    for(int u = i; u <= j; ++u){
                        s.at(t).at(u) = '.';
                    }
                }
            }
            else
            {
                for(int t = i; t <= j; ++t)
                {
                    for(int u = i; u <= j; ++u){
                        s.at(t).at(u) = '#';
                    }
                }
            }
        }
    }

    rep(i, n){
        rep(j, n){
            cout << s.at(i).at(j);
        }
        cout << endl;
    }
}