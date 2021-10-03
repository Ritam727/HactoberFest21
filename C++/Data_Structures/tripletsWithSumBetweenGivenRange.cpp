bool isInA(double x)
{
    if (x > 0 && x < 2.0 / 3.0)
        return 1;

    return 0;
}

bool isInB(double x)
{
    if (x >= 2.0 / 3.0 && x < 1)
        return 1;

    return 0;
}

bool isInC(double x)
{
    if (x >= 1 && x < 2.0)
        return 1;

    return 0;
}

int Solution::solve(vector<string> &A) {
    vector<double> v;
    for (string x : A)
        v.push_back(stod(x));

    double max1a = INT_MIN, max2a = INT_MIN, max3a = INT_MIN, max1b = INT_MIN, max2b = INT_MIN;
    double min1a = INT_MAX, min2a = INT_MAX, min1b = INT_MAX, min2b = INT_MAX, min1c = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        if (max1a < v[i] && isInA(v[i]))
        {
            max3a = max2a;
            max2a = max1a;
            max1a = v[i];
        }

        else if (max2a < v[i] && isInA(v[i]))
        {
            max3a = max2a;
            max2a = v[i];
        }

        else if (max3a < v[i] && isInA(v[i]))
        {
            max3a = v[i];
        }

        else if (max1b < v[i] && isInB(v[i]))
        {
            max2b = max1b;
            max1b = v[i];
        }

        else if (max2b < v[i] && isInB(v[i]))
        {
            max2b = v[i];
        }


        if (min1a > v[i] && isInA(v[i]))
        {
            min2a = min1a;
            min1a = v[i];
        }

        else if (min2a > v[i] && isInA(v[i]))
        {
            min2a = v[i];
        }

        else if (min1b > v[i] && isInB(v[i]))
        {
            min2b = min1b;
            min1b = v[i];
        }

        else if (min2b > v[i] && isInB(v[i]))
        {
            min2b = v[i];
        }

        else if (min1c > v[i] && isInC(v[i]))
        {
            min1c = v[i];
        }
    }

    if (max1a + max2a + max3a > 1)
        return 1;

    if (max1a + max2a + min1b > 1 && max1a + max2a + min1b < 2)
        return 1;

    if (min1a + min2a + max1b > 1 && min1a + min2a + max1b < 2)
        return 1;

    if (min1a + min1b + min2b < 2)
        return 1;

    if (min1a + min1b + min1c < 2)
        return 1;

    if (min1a + min2a + min1c < 2)
        return 1;

    return 0;

}