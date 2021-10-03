int Solution::removeDuplicates(vector<int> &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	for (int i = 0; i < A.size() - 1; i++)
	{
		int j = i + 1;
		while (j < A.size() && A[i] == A[j])
			j++;

		if (j == i + 1 || j == i + 2)
			continue;

		A.erase(A.begin() + i, A.begin() + j - 2);
	}

	return A.size();

}



// or

// class Solution {
//     public:
//         int removeDuplicates(int A[], int n) {
//             int count = 0;
//             for (int i = 0; i < n; i++) {
//                 if (i < n - 2 && A[i] == A[i+1] && A[i] == A[i+2]) continue;
//                 else {
//                     A[count] = A[i];
//                     count++;
//                 }
//             }
//             return count;
//         }
// };
