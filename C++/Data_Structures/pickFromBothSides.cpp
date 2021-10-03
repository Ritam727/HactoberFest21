int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int window = n - B;

    int totalSum = 0;

    for (int x : A)
        totalSum += x;

    int windowSum = 0;
    int minSum = INT_MAX;
    for (int i = 0; i < window; i++) {
        windowSum += A[i];
    }

    minSum = min(minSum, windowSum);

    for (int i = window; i < n; i++) {
        windowSum -= A[i - window];
        windowSum += A[i];

        minSum = min(minSum, windowSum);

    }

    return totalSum - minSum;

}


//or

// window on left and right
