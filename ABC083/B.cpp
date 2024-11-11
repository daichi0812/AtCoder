/*
    some_sums
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int A;
    int B;

    cin >> N >> A >> B;

    int total = 0;

    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        int n = i;

        while (n > 0)
        {
            sum += n % 10;
            n = n / 10;
        }
        
        if(sum >= A && sum <= B){
            total += i;
        }
    }

    cout << total << endl;

}