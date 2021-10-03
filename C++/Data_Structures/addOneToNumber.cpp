vector<int> Solution::plusOne(vector<int> &A) {

    int carry = 0;
    int n = A.size();

    reverse(A.begin(), A.end());

    if (!n)
        return A;
    int i = 0;

    A[i] += 1;
    carry = A[i] / 10;
    A[i] %= 10;

    if (carry)
        i++;

    while (carry && i < n)
    {
        A[i] += carry;
        carry = A[i] / 10;
        A[i] %= 10;
        i++;
    }

    while (carry)
    {
        A.push_back(carry);
        carry = A[i] / 10;
        A[i] %= 10;
        i++;
    }

    reverse(A.begin(), A.end());

    // for(int x: A)
    //     cout<<x<<" ";
    // cout<<endl;

    i = 0;
    while (!A[i])
        i++;

    vector<int> ans;
    for (i; i < A.size(); i++)
        ans.push_back(A[i]);

    return ans;
}
