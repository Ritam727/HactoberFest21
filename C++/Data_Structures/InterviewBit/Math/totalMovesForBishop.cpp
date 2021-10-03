int Solution::solve(int A, int B) {


	int n = 8;

	int lu = min(A - 1, 8 - B);
	int ru = min(8 - A, 8 - B);
	int ld = min(A - 1, B - 1);
	int rd = min(8 - A, B - 1);

	return lu + ld + ru + rd;
}
