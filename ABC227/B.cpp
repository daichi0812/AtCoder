#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;

    set<int> st;
    int ans = 0;

    for(int a = 1; a < 1000; ++a){
        for(int b = 1; b < 1000; ++b){
            st.insert(4 * a * b + 3 * a + 3 * b);
        }
    }

    rep(i, n)
    {   
        int s;
        cin >> s;

        if(st.count(s) == 0){
            ans++;
        }

    }

    cout << ans << endl;
}