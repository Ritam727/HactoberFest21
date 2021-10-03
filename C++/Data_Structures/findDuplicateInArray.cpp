//swap would work if array wasn't const

int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    if (n == 0 || n == 1)
        return -1;

    if (n == 2)
    {
        if (A[0] == A[1]) {
            return A[1];
        } else {
            return -1;
        }
    }

    int i = 0;

    int slow = A[i];
    int fast = A[slow];

    while (slow != fast)
    {
        slow = A[slow];
        fast = A[A[fast]];
    }

    slow = 0;
    while (slow != fast)
    {
        slow = A[slow];
        fast = A[fast];
    }

    return slow;
}