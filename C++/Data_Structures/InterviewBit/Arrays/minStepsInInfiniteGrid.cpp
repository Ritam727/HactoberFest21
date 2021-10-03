int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < A.size() - 1; i++)
    {
        x = abs(A[i + 1] - A[i]);
        y = abs(B[i + 1] - B[i]);

        if (x == 0 || y == 0)
        {
            steps += x + y;
            continue;
        }

        else
        {
            int cross = min(x, y);
            steps += cross;
            steps += max(y - cross, x - cross);
        }
    }

    return steps;
}
