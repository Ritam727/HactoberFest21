string nextP(vector<int> &v, string s, int k, vector<int> fact) {
	if (v.empty())
		return s;

	//or iteratively while !v.empty()
	int n = v.size();
	int idx = k / fact[n - 1];
	s.append(to_string(v[idx]));
	k -= idx * fact[n - 1];
	v.erase(v.begin() + idx);
	return nextP(v, s, k, fact);
}

string Solution::getPermutation(int n, int B) {
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;
	vector<int> fact(n + 1, 1);

	for (int i = 1; i <= n; i++)
		fact[i] = fact[i - 1] * i;


	B--;
	string s = "";
	return nextP(v, s, B, fact);
}
//Proper backtracking

void nextP(int idx, int A, vector<string> &ans, string comb, unordered_map<int, bool> mp, int &cnt, int B) {
	if (idx == A) {
		ans.push_back(comb);
		cnt++;
		return;
	}

	for (int i = 1; i <= A && cnt < B; i++) {
		if (mp[i]) {
			int sz = comb.size();
			string temp = to_string(i);
			comb += temp;
			mp[i] = 0;
			nextP(idx + 1, A, ans, comb, mp, cnt, B);

			mp[i] = 1;
			comb.erase(sz);

		}
	}
}

string Solution::getPermutation(int A, int B) {

	unordered_map<int, bool> mp;
	for (int i = 1; i <= A; i++)
		mp[i] = 1;
	string comb = "";
	vector<string> ans;
	int cnt = 0;
	nextP(0, A, ans, comb, mp, cnt, B);
	return ans[ans.size() - 1];
}




for (int i = 1; i <= A; i++) {
	if (mp[A[i]]) {
		totalBefore += (i - 1) * fact(A - idx - 1);
		if (totalBefore > B)

		}
}