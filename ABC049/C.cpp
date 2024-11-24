/* 白昼夢 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> word = {"dream", "dreamer", "erase", "eraser"};
    string S;
    cin >> S;

    bool result = true;

    reverse(S.begin(), S.end());

    for (int i = 0; i < word.size(); i++)
    {
        reverse(word.at(i).begin(), word.at(i).end());
    }

    int i = 0;
    while (i < S.size())
    {
        bool can = false;
        for (int j = 0; j < word.size(); j++)
        {
            if (word.at(j) == S.substr(i, word.at(j).size()))
            {
                can = true;
                i += word.at(j).size();
            }
        }
        if (!can)
        {
            result =false;
            break;
        }
    }

    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}