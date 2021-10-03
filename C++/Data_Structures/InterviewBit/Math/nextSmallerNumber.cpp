//next permutation

string Solution::solve(string s) {

	int n = s.size();

	int j = n - 1;
	while (j > 0)
	{
		if (s[j - 1] < s[j])
		{
			int i = j;
			while (s[i] > s[j - 1])
				i++;
			swap(s[j - 1], s[i - 1]);
			break;
		}
		j--;
	}

	if (!j)
		return "-1";

	for (int i = j; i <= (n + j - 1) / 2; i++)
	{
		swap(s[i], s[n + j - 1 - i]);
	}

	// or reverse
	// reverse(s.begin() + i, s.end());

	return s;


}
