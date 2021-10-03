int Solution::solve(vector<int> &A) {
	int minn = INT_MAX;
	int maxx = INT_MIN;

	for (int i = 0; i < A.size(); i++)
	{
		minn = min(A[i], minn);
		maxx = max(A[i], maxx);
	}

	return minn + maxx;
}
