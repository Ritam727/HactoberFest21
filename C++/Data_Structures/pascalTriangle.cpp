vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > v;



    for (int i = 0; i < A; i++)
    {
        vector<int> vInside;
        int element = 1;
        for (int j = 1; j <= i; j++)
        {
            vInside.push_back(element);
            element = (element * (i - j + 1)) / j;

        }
        vInside.push_back(element);


        v.push_back(vInside);
    }


    return v;
}
