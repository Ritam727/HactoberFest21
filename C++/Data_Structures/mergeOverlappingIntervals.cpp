/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool compareInterval(Interval i1, Interval i2)
{
    if (i1.start == i2.start)
        return i1.end < i2.end;
    return i1.start < i2.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end(), compareInterval);
    vector<Interval> ans;

    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i].end >= A[i + 1].start) {
            A[i + 1].start = min(A[i].start, A[i + 1].start);
            A[i + 1].end = max(A[i].end, A[i + 1].end);
        }

        else
            ans.push_back(A[i]);
    }

    ans.push_back(A[A.size() - 1]);

    return ans;
}
