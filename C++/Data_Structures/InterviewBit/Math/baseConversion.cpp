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

	int num, base;

	cout << "Enter base" << endl;
	cin >> base;

	cout << "Enter number to convert " << endl;
	cin >> num;

	string s = "";

	while (num)
	{
		s += to_string(num % base);
		num /= base;
	}

	reverse(s.begin(), s.end());
	cout << s;
}



