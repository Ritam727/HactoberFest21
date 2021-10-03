int Solution::solve(int A) {
	int steps = 0;
	int curr = 0;
	int target = abs(A);

	while (curr < target || (curr - target) % 2 != 0)
	{
		steps++;
		curr += steps;
	}

	return steps;
}
