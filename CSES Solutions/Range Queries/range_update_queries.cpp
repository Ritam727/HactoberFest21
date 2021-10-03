#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 2e5;
int n;
ll t[2 * N];
ll query(int i) {
  ll res = 0;
  i += n;
  for (; i > 0; i >>= 1) {
    res += t[i];
  }
  return res;
}
void modify(int l, int r, ll v) {
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) {
      t[l++] += v;
    }
    if (r & 1) {
      t[--r] += v;
    }
  }
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int q;
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    cin >> t[i + n];
  }
  for (int i = 0; i < q; i++) {
    int k;
    cin >> k;
    if (k == 1) {
      int l, r, v;
      cin >> l >> r >> v;
      modify(l - 1, r, v);
    } else {
      int ind;
      cin >> ind;
      cout << query(ind - 1) << endl;
    }
  }
  return 0;
}