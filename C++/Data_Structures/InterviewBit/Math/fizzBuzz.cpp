vector<string> Solution::fizzBuzz(int A) {
	vector<string> ans;
	for (int i = 1; i <= A; i++)
	{
		string s = "";
		if (i % 3 == 0)
			s += "Fizz";

		if (i % 5 == 0)
			s += "Buzz";

		if (s.empty())
			s += to_string(i);

		ans.push_back(s);
	}

	return ans;
}
