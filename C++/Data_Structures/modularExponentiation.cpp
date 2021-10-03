int Solution::Mod(int A, int B, int C) {

	if (!A)
		return 0;

	if (!B)
		return 1;

	long long y = Mod(A, B / 2, C);

	y = ((y % C) * (y % C)) % C;

	if (B & 1)
		y = ((y % C) * (A % C)) % C;

	return (y + C) % C;
}
