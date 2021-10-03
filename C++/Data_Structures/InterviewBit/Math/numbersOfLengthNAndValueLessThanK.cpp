int Solution::solve(vector < int > & A, int B, int C) {

	if (!C || !A.size())
		return 0;

	vector < int > num;
	int c = C;
	while (C) {
		num.push_back(C % 10);
		C /= 10;
	}
// B > C ka size
	if (B > num.size())
		return 0;

// B< C ka size
	if (B < num.size()) {
		if (B == 1)
			return A.size();

		int x = A.size();
		if (A[0] == 0)
			x--;
		return x * pow(A.size(), B - 1);

	}

// B== C ka size

	int len = num.size();
	int ans = 0;

	if (len == 1) {
		return (lower_bound(A.begin(), A.end(), c) - A.begin()); // 0 will be considered here
	}
	for (int i = len - 1; i >= 0; i--) {

		int count = lower_bound(A.begin(), A.end(), num[i]) - A.begin(); // number less than MSB

		//cout<<count;
		if (i == len - 1 && A[0] == 0) {
			count--;
		}
		ans += (count * pow(A.size(), i)); //i = remaining length

		// if this number is not found,  example -
		//A : [ 2, 3, 5, 6, 7, 9 ]
		// B : 5
		// C : 42950
		// as 4 is not found, we need to break after 1 iteraion itself
		//for the leftmost digit the numbers possible are either 2 or 3.
		//And for the rest of the digits, it’s 6^4 as you pointed out,
		//therefore the total number of possibilities = 2 * 6^4 = 2592
		if (!binary_search(A.begin(), A.end(), num[i]))
			return ans;

		//  cout<<"A"<<ans<<" ";
	}
	return ans;
}

//sexy solution!