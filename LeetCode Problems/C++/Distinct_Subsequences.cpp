#include <bits/stdc++.h>

using namespace std;

int numDistinct(string s, string t)
{
  vector<vector<int>> dp(t.length() + 1, vector<int>(s.length() + 1, 0));
  for (int j = 0; j <= s.length(); j++)
    dp[0][j] = 1;
  for (int i = 1; i <= t.length(); i++)
  {
    for (int j = 1; j <= s.length(); j++)
    {
      if (t[i - 1] == s[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
      }
      else
      {
        dp[i][j] = dp[i][j - 1];
      }
    }
  }
  return dp[t.length()][s.length()];
}

int main()
{
  string s, t;
  cin >> s >> t;
  int ans = numDistinct(s, t);
  cout << "The given string " << s << " has " << ans << " number of distinct subsequences which are equal to " << t;
}