#include <bits/stdc++.h>
using namespace std;
int divide(long long dev, long long div) {
  int sign = ((dev < 0) ^
              (div < 0)) ? -1 : 1;
  // remove sign of operands
  dev = abs(dev);
  div = abs(div);
  long long q = 0, temp = 0;
  for (int i = 31; i >= 0; --i) {
    if (temp + (div << i) <= dev) {
      temp += div << i;
      q |= 1LL << i;
    }
  }
  if(sign==-1) q=-q;
  return q;
}
// Main code
int main() {
  int a = 13, b = 3;
  cout << divide(a, b) << "\n";
  a = 33, b = -8;
  cout << divide(a, b);
  return 0;
}
