#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define lld long long int

void file_i_o()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	file_i_o();

	int n;
	cout << "Enter n" << endl;
	cin >> n;

	vector<bool> primes(n + 1, 1);

	primes[0] = primes[1] = 0;

	for (int i = 2; i * i <= n; i++)
	{
		if (primes[i])
		{
			for (int j = i * i; j <= n; j += i)
				primes[j]  = 0;

		}
	}

	cout << "Primes are" << endl;

	for (int i = 0; i < n + 1; i++)
	{
		if (primes[i])
			cout << i << " ";
	}
}



