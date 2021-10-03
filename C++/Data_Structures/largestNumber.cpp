bool compare(int x, int y)
{
    string s1 = to_string(x) + to_string(y);
    string s2 = to_string(y) + to_string(x);

    return s1 > s2;
}

string Solution::largestNumber(const vector<int> &A) {

    vector<int> v = A;
    sort(v.begin(), v.end(), compare);

    string ans;
    for (int x : v)
        ans += to_string(x);


    int count = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == '0')
            count++;
    }

    return count == ans.size() ? "0" : ans;
}
