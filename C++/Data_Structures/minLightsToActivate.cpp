int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int light, dark = 0;
    int ans = 0;

    while (dark < n)
    {
        light = dark + B - 1 < n ? dark + B - 1 : n - 1;
        while (light >= 0 && light >= dark - B + 1 && A[light] != 1)
            light--;
        if (light < 0 || light < dark - B + 1)
            return -1;

        dark = light + B;
        ans++;
    }

    return ans;
}
