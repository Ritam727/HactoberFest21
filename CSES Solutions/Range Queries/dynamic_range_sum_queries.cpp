#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 2e5;
int n;
ll t[2 * N];
void build() {
  for (int i = n - 1; i > 0; --i) {
    t[i] = t[i << 1] + t[i << 1 | 1];
  }
}
ll queries(int l, int r) {
  ll res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) {
      res += t[l++];
    }
    if (r & 1) {
      res += t[--r];
    }
  }
  return res;
}
void update(int i, ll v) {
  int ov = t[i + n];
  for (i += n; i > 0; i >>= 1) {
    t[i] += (v - ov);
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
  build();
  for (int i = 0; i < q; i++) {
    int k, l, r;
    cin >> k >> l >> r;
    if (k == 1) {
      update(l - 1, r);
    } else {
      cout << queries(l - 1, r) << endl;
    }
  }
  return 0;
}