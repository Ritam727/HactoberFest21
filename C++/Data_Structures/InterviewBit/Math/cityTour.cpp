#define MOD int(1e9 + 7)
#define ll long long
ll int fact(ll int n)
{
	ll int dp[n + 1];
	dp[0] = dp[1] = 1;

	if (n == 0 || n == 1)
		return 1;

	for (ll int i = 2; i <= n; i++)
		dp[i] = ((dp[i - 1] % MOD) * (i % MOD)) % MOD;

	return dp[n];
}

ll int powerr(ll a, ll b)
{
	// cout<<"For "<<a<<"and "<<b<<endl;

	ll int res = 1;
	while (b)
	{
		if (b & 1)
			res = ((res % MOD) * (a % MOD)) % MOD;

		a = ((a % MOD) * (a % MOD)) % MOD;
		b >>= 1;
	}
	// cout<<" res is "<<res;
	return res;
}

int Solution::solve(int A, vector<int> &B) {
	// a = 11
	// b = 4,9

	int size = B.size();
	int unvisited = A - size;
	sort(B.begin(), B.end());
	vector<int> inBetween;

	inBetween.push_back(B[0] - 1);
	for (int i = 1; i < size; i++)
		inBetween.push_back(B[i] - B[i - 1] - 1);

	inBetween.push_back(A - B[size - 1]);

	ll int ways = 1;

	ways *= fact(unvisited) % MOD;
	// cout<<"1 "<<ways<<endl;
	for (int i = 0; i < inBetween.size(); i++)
	{
		// cout<<" for "<<inBetween[i]<<" "<<powerr(fact(inBetween[i]), MOD - 2);
		ways = ((ways % MOD) * (powerr(fact(inBetween[i]), MOD - 2) % MOD)) % MOD;
	}
// 	cout<<"2 "<<ways<<endl;
	for (int i = 1; i < inBetween.size() - 1; i++)
	{
		if (inBetween[i] < 1)
			continue;

		ways = ((ways % MOD) * (powerr(2, inBetween[i] - 1) % MOD)) % MOD;
	}
	// cout<<"3 "<<ways<<endl;
	return ways % MOD;


}
