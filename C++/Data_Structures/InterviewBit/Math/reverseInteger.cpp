int Solution::reverse(int A) {

	if (A > INT_MAX || A < INT_MIN)
		return 0;

	int rev = 0;
	int a = abs(A);
	while (a)
	{

		int digit = a % 10;

		if (rev > (INT_MAX / 10) || (rev == INT_MAX / 10 && digit > INT_MAX % 10))
			return 0;

		rev *= 10;
		rev += digit;
		a /= 10;
	}

	if (A < 0)
		rev *= -1;


	return rev;
}
