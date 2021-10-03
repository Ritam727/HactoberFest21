int Solution::solve(int A, int B, int C) {
	A--;
	return (A % B + C % B) % B;

}