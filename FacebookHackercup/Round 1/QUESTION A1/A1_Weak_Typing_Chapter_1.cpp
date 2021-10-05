#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
int main()
{
    freopen  ("A1 Main input.txt", "r", stdin);
    freopen  ("output.txt", "w", stdout);
    int t;
    cin >> t;
    int a = t;
    while (t-- > 0)
    {
        // Hey @myselfdeepdas ''BUNNY'' you can code from here --->
        //initialise Nn
        int deepNn;
        //input Nn
        cin >> deepNn;

        //initialise Ww
        string deepWw;
        //input Ww
        cin >> deepWw;

        //initialise deepAnswer 
        string deepAnswer = "";

        // initialise vector
        vector<char> deepArray;
        for (int i = 0; i < deepWw.size(); i++)
            if (deepWw[i] != 'F')
                
        deepArray.push_back(deepWw[i]);
        int deepCount = 0;
        if (deepArray.size() <= 1)
            deepCount = 0;
        else
        {
            char deepWord = deepArray.at(0);
            for (int i = 0; i < deepArray.size(); i++)
            {
                if (deepArray.at(i) != deepWord)
                    deepCount++;
                deepWord = deepArray.at(i);
            }
        }
        cout << "Case #" << a - t << ":" << " " << deepCount << endl;
    }
    return 0;
}