string Solution::solve(string s) {

	int n = s.size();
	vector<char> ans(n);

	int mid = (n - 1) / 2;

	//make a palindrome
	for (int i = 0; i <= (n - 1) / 2; i++)
	{
		ans[i] = ans[n - i - 1] = s[i];
	}

	string s1;
	for (char x : ans)
		s1.push_back(x);

	if (s1 > s)
		return s1;


	if (ans[mid] != '9')
	{
		s1[mid] = s1[n - 1 - mid] = ans[mid] + 1;
		return s1;

	}


	int j = mid;
	int carry = 1;

	while (carry && j >= 0)
	{
		if (s1[j] == '9')
		{
			s1[j] = s1[n - 1 - j] = '0';
			carry = 1;
		}

		else
		{
			s1[j] = s1[n - 1 - j] = s1[j] + 1;
			carry = 0;
		}

		j--;
	}

	if (carry) {
		s1.pop_back();
		s1 = "1" + s1 + "1";

		//or s1 = s1 + 1;
		//now make s[i] = s[n-1-i]
	}
	return s1;

}
