int findPaths(int A, int B, int row, int col)
{
	if (row == A - 1 || col == B - 1)
		return 1;

	return findPaths(A, B, row + 1, col) + findPaths(A, B, row, col + 1);
}

int Solution::uniquePaths(int A, int B) {
	return findPaths(A, B, 0, 0);
	// or

	// m+n-2 C n-1 = (m+n-2)! / (n-1)! (m-1)!
	// long long ans = 1;
	// for (int i = n; i < (m + n - 1); i++) {
	// 	ans *= i;
	// 	ans /= (i - n + 1);
	// }
	// return (int)ans;

}
