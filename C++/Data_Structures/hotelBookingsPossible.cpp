bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int, int> > arr;
    int n = arrive.size();
    for (int i = 0; i < n; i++)
    {
        arr.push_back({arrive[i], 1});
        arr.push_back({depart[i], 0});
    }

    sort(arr.begin(), arr.end());

    int rooms = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].second == 1)
        {
            rooms++;
            if (rooms > K)
                return 0;
        }

        else
            rooms--;
    }

    return 1;
}