int Solution::removeDuplicates(vector<int> &arr) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	for (int i = 0; i < arr.size() - 1; i++)
	{
		int j = i + 1;
		while (j < arr.size() && arr[i] == arr[j])
			j++;

		if (j == i + 1)
			continue;

		arr.erase(arr.begin() + i, arr.begin() + j - 1);

	}

	return arr.size();

// or
// auto it = unique(arr.begin(), arr.end());

// return it - arr.begin();



// or


	// while (j < n)
	// {

	// 	while (j < n && A[i] == A[j])
	// 		j++;


	// 	if (j == n)
	// 		break;



	// 	A[i + 1] = A[j], cnt++;
	// 	j++;
	// 	i++;

	// }

	// // for (int x : A)
	// // 	cout << x << " ";

	// cout << cnt + 1;

}
