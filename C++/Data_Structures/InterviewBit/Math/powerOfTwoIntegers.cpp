int Solution::isPower(int A) {

	if (A == 1)
		return 1;

	for (int i = 2; i * i <= A; i++)
	{
		int c = log(A) / log(i);
		if (A == pow(i, c))
			return 1;
	}

	return 0;

}
