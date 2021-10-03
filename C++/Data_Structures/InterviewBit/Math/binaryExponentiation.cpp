#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define lld long long int

int binaryExpRecursive(int a, int b)
{
	if (b == 0)
		return 1;

	int res = 1;

	res = binaryExpRecursive(a, b / 2);
	res *= res;
	if (b % 2)
		res = res * a;

	return res;
}

int binaryExp(int a, int b)
{

	// (a^b) % c;
	int res = 1;

	while (b)
	{
		if (b & 1)
		{
			res *= a;    // res =(res * a) % c;
		}
		a *= a; 		// a = (a * a) % c;
		b /= 2;

	}

	return res;

}


// int Solution::Mod(int A, int B, int C) {
// 	long long res = 1;
// 	long long a = A;
// 	while (B) {
// 		if (B & 1)
// 			res = (res * 1LL * a) % C;

// 		a = (a * 1LL * a) % C;
// 		B >>= 1;
// 	}

// 	return (res+C) % C;   // handles negative
// }


int main()
{
	int a, b;
	cout << "Enter number ";
	cin >> a;
	cout << "Enter power ";
	cin >> b;

	cout << binaryExp(a, b);
}



