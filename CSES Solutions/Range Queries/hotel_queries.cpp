#include <bits/stdc++.h>
using namespace std;
const int N = 10e5;
int n;
pair<int, int> t[2 * N];

void build() {
  for (int i = n - 1; i > 0; i--) {
    t[i] = t[i << 1].first >= t[i << 1 | 1].first ? t[i << 1] : t[i << 1 | 1];
  }
}
void update(int i, int v) {
  t[i].first -= v;
  for (i >>= 1; i > 0; i >>= 1) {
    t[i] = t[i << 1].first >= t[i << 1 | 1].first ? t[i << 1] : t[i << 1 | 1];
  }
}

int getInd(int gs) {
  int i = 0;
  if (t[1].first < gs) {
    return 0;
  }
  for (i = 1; i < n;) {
    if (t[i << 1].first >= gs) {
      i <<= 1;
    } else if (t[i << 1 | 1].first >= gs) {
      i <<= 1;
      i++;
    } else {
      return 0;
    }
  }
  update(i, gs);
  return t[i].second;
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
  int tn = n;
  n = (1 << (int)(log2(n) + 1));
  for (int i = 0; i < tn; i++) {
    cin >> t[i + n].first;
    t[i + n].second = i + 1;
  }
  build();
  vector<int> ans;
  for (int i = 0; i < q; i++) {
    int v;
    cin >> v;
    ans.push_back(getInd(v));
  }
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}