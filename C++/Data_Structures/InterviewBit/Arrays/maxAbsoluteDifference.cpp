int Solution::maxArr(vector<int> &A) {
    int n = A.size();

    vector<int> plusI;
    vector<int> minusI;

    for (int i = 0; i < n; i++)
    {
        plusI.push_back(A[i] + i);
        minusI.push_back(A[i] - i);
    }

    int plusMax = INT_MIN, plusMin = INT_MAX, minusMax = INT_MIN, minusMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        plusMin = min(plusMin, plusI[i]);
        plusMax = max(plusMax, plusI[i]);

        minusMin = min(minusMin, minusI[i]);
        minusMax = max(minusMax, minusI[i]);

    }


    return plusMax - plusMin > minusMax - minusMin ? plusMax - plusMin : minusMax - minusMin;

}