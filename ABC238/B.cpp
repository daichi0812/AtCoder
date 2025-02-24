#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> r(n);
    vector<int> rad(n + 1);

    rep(i, n)
    {
        cin >> a.at(i);
    }

    rep(i, n)
    {
        for (int j = 0; j <= i; ++j)
        {
            r.at(i) += a.at(j);
        }
        r.at(i) = r.at(i) % 360;
    }

    sort(r.begin(), r.end());
    
    rad.at(n) = 360;
    rep(i, n)
    {
        rad.at(i) = r.at(i);
        

        if(i > 0){
            rad.at(i) -= r.at(i - 1);
        }

        rad.at(n) -= rad.at(i);
    }


    int ans = 0;
    rep(i, n + 1){ 
        ans = max(ans, rad.at(i));
    }
    cout << ans << endl;
}