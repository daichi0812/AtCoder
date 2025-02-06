#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    bool result = true;

    for (int row = 0; row < h; ++row)
    {
        for (int col = 0; col < w; ++col)
        {
            cin >> a.at(row).at(col);
        }
    }

    for (int row1 = 0; row1 < h; ++row1)
    {
        for (int row2 = 0; row2 < h; ++row2)
        {
            for (int col1 = 0; col1 < w; ++col1)
            {
                for (int col2 = 0; col2 < w; ++col2)
                {
                    if (row1 < row2 && col1 < col2)
                    {
                        int i1j1 = a.at(row1).at(col1);
                        int i2j2 = a.at(row2).at(col2);
                        int i2j1 = a.at(row2).at(col1);
                        int i1j2 = a.at(row1).at(col2);
                        if (i1j1 + i2j2 > i2j1 + i1j2)
                        {
                            result = false;
                        }
                    }
                }
            }
        }
    }

    if (result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}