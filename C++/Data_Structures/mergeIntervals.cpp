vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<Interval> ans;

    auto it = intervals.begin();

    while (it != intervals.end())
    {
        while (it != intervals.end() && it->end < newInterval.start) {
            ans.push_back(*it);
            it++;
        }

        while (it != intervals.end() && newInterval.end >= it->start) {
            newInterval.start = min(newInterval.start, it->start);
            newInterval.end = max(newInterval.end, it->end);
            it++;
        }

        ans.push_back(newInterval);

        while (it != intervals.end()) {
            ans.push_back(*it);
            it++;
        }
    }

    return ans;



}