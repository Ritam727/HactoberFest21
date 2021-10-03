#define MOD 1000003
#define ll long long

ll factorial(ll n)
{
	if (n == 0 || n == 1)
		return 1;

	ll dp[n + 1];
	dp[0] = dp[1] = 1;

	for (ll i = 2; i <= n; i++)
		dp[i] = ((i % MOD) * (dp[i - 1] % MOD)) % MOD;

	return dp[n];
}

ll powerr(ll a, ll b)
{

	ll res = 1;
	while (b)
	{
		if (b & 1)
			res = ((res % MOD) * (a % MOD)) % MOD;

		a = ((a % MOD) * (a % MOD)) % MOD;
		b >>= 1;
	}
	return res;
}


int Solution::findRank(string A) {

	vector<int> presentCount(256, 0);
	unordered_map<int, int>  mp;
	int n = A.size();

	for (int i = 0; i < n; i++)
	{
		presentCount[A[i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		mp[A[i]] = presentCount[A[i]];
	}



	ll ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 256; j++)
		{
			if (j == A[i])
				break;

			if (presentCount[j])
			{

				// cout << "For char " << j << "present count was " << presentCount[j] << endl;
				presentCount[j]--;

				ll denom = 1;
				for (auto it : mp)
				{
					if (it.first == j)
						continue;

					denom = ((denom % MOD) * (powerr(factorial(it.second), MOD - 2) % MOD)) % MOD;

				}
				denom = ((denom % MOD) * (powerr(factorial(presentCount[j]), MOD - 2) % MOD)) % MOD;


				ans = ans % MOD + ((factorial(n - i - 1) % MOD) * (denom % MOD)) % MOD;
				// cout << endl;
				// cout << ans << " ";
				presentCount[j]++;
			}

		}

		presentCount[A[i]]--;
		mp[A[i]]--;

	}


	return (ans + 1) % MOD;
}

//or simply for caaab

// 4(num_lesser) * fact(n-i-1) / 3!1! freq()

#define Mod 1000003

// Factorial Function
long long fact (int n) {

	if (n == 0 || n == 1)
		return 1;

	long long ans = 1;

	while (n > 1) {

		ans = (ans * n) % Mod;
		n--;
	}

	return ans;
}

// Calculating Power Under Modulus
long long modPow (long long a, long long n) {

	long long ans = 1;

	while (n > 0) {

		if (n & 1)
			ans = (ans * a) % Mod;

		a = (a * a) % Mod;
		n >>= 1;
	}

	return ans;
}

int Solution::findRank(string A) {

	int size = A.size();
	long long ans = 1, repeat, less_num, count;

	for (int i = 0; i < size; i++) { // Comparing each position to calculate
		// how many numbers greater can be formed

		less_num = 0;           // No of elements less than value at A[i] to
		// calculate nos less than given number
		for (int j = i + 1; j < size; j++)
			if (A[j] < A[i])
				less_num++;

		vector<int> freq(256, 0);       // Frequency calculation of characters.
		// 256 considers all characters
		for (int j = i; j < size; j++)
			freq[A[j]]++;

		repeat = 1;

		for (int j = 0; j < 256; j++)                   // removing Permutations of
			repeat = (repeat * fact(freq[j])) % Mod;    // repetitive characters

		repeat = modPow(repeat, Mod - 2); // Taking Modular Inverse using Fermat's little
		// Theorem.
		// If Mod is not prime then use
		// Extended Euclidean Theorem
		// to calculate Modular Inverse

		count = (fact(size - i - 1) * less_num) % Mod; // Total numbers smaller than
		count = (count * repeat) % Mod;                // given number whose i'th digit is
		// less than A[i]
		ans = (ans + count) % Mod;          // Adding in final answer
	}

	return ans;
}