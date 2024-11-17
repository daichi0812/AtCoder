/* Otoshidama */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    int resultA = -1;
    int resultB = -1;
    int resultC = -1;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (N - i - j >= 0 && 10000 * i + 5000 * j + 1000 * (N - i - j) == Y)
            {
                resultA = i;
                resultB = j;
                resultC = (N - i - j);
            }
        }
    }

    cout << resultA << " " << resultB << " " << resultC << endl;
}