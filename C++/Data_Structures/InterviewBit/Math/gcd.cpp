int Solution::gcd(int A, int B) {

	if (A == 0)
		return B;

	if (B == 0)
		return A;
	while (A != B)
	{
		if (A > B)
			A = A - B;

		else
			B = B - A;
	}

	return A;

	// or

	// if(m < n)
	// 	swap(m,n);

	// if(n == 0)
	// 	return m;

	//Euclids algo
	// return gcd(m % n, n);
}
