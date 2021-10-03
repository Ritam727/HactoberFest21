string Solution::convertToTitle(int A) {

	string ans;
	while (A) {
		//or A--, A % 26 + 'A'
		ans = char ((A - 1) % 26 + 'A') + ans;
		A = (A - 1) / 26;
	}
	return ans;
}
