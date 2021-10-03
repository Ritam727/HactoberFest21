#define lld long long int
vector<int> Solution::repeatedNumber(const vector<int> &A) {

    lld n = A.size();

    lld actualSum = 0;
    lld sum = 0;

    lld actualSq = 0;
    lld sq = 0;

    lld temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = A[i];
        sum += temp;
        sum -= (i + 1);
        actualSq += (temp * temp);
        actualSq -= ((long long)(i + 1) * (long long)(i + 1));
    }

    lld a , b;



    a = (((actualSq) / (sum)) + sum) / 2;
    b = (((actualSq) / (sum)) - sum) / 2;

    vector<int> v;
    v.push_back((int) a);
    v.push_back((int) b);

    return v;



}


//or

// A[A[i] - 1] = A[i] checking works but here the array is const
