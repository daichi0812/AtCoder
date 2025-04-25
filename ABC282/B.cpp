#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int flags = 0;
            for (int k = 0; k < m; ++k) {
                if (s[i][k] != 'x' || s[j][k] != 'x') {
                    flags++;
                }
            }
            if (flags == m) {
                count++;
            }
        }
    }
    cout << count << endl;

}