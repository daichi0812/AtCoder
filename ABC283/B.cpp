#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }
  int q;
  cin >> q;
  rep(i, q){
    int f, k, x;
    cin >> f;
    if(f == 1){
      cin >> k >> x;
      k--;
      a[k] = x;
    }
    if(f == 2){
      cin >> k;
      k--;
      cout << a[k] << endl;
    }
  }
}