vector<int> Solution::maxone(vector<int> &A, int B) {

	int n = A.size();
	int i = 0, j = 0;
	int cnt = 0, len = INT_MIN;
	vector<int> ans;
	pair<int, int> p;
	while (j < n)
	{
		if (!A[j])
			cnt++;

		while (cnt > B)
		{
			if (!A[i])
				cnt--;
			i++;
		}

		if (j - i + 1 > len) {
			len = j - i + 1;
			p.first = i;
			p.second = j;
		}

		j++;
	}

	for (int idx = p.first; idx <= p.second; idx++)
		ans.push_back(idx);

	return ans;
}
