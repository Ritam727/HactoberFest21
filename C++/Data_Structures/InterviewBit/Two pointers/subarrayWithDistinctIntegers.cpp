int atMost(vector<int> &A, int B) {
	int n = A.size(), i = 0, j = 0, ans = 0;
	unordered_map<int, int> mp;
	int cnt = 0;
	while (j < n) {
		mp[A[j]]++;
		while (mp.size() > B)
		{
			mp[A[i]]--;
			if (!mp[A[i]])
				mp.erase(A[i]);
			i++;
		}

		ans += j - i + 1;
		j++;
	}

	return ans;

}

int Solution::solve(vector<int> &A, int B) {
	return atMost(A, B) - atMost(A, B - 1);
}