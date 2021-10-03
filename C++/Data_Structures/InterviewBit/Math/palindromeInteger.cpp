int Solution::isPalindrome(int A) {
	if (A < 0)
		return 0;

	long long int orignalA = A;
	long long int res = 0;

	while (A) {
		res *= 10;
		res += A % 10;
		A /= 10;
	}

	if (res == orignalA)
		return 1;

	return 0;

}
