int Solution::trailingZeroes(int A) {

    int i = 1;
    int num = pow(5, i);
    int ans = 0;
    while (num < A)
    {
        ans += A / num;
        i++;
        num = pow(5, i);
    }

    return ans;
}
