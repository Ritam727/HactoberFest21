#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int n;
long long t[2 * N];

void build() {
  for (int i = n - 1; i > 0; --i)
    t[i] = t[i << 1] + t[i << 1 | 1];
}

void modify(int p, int value) {
  for (t[p += n] = value; p > 1; p >>= 1)
    t[p >> 1] = t[p] + t[p ^ 1];
}

long long query(int l, int r) {
  long long res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1)
      res += t[l++];
    if (r & 1)
      res += t[--r];
  }
  return res;
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
    cin >> t[n + i];
  }
  build();
  for (int i = 0; i < q; i++) {
    int p, q;
    cin >> p >> q;
    cout << query(p - 1, q) << endl;
  }
  return 0;
}