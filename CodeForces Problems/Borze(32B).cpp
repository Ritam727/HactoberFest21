#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int length = str.length();
    string str1 = ".";
    string str2 = "-.";
    string str3 = "--";
    int arr[length];
    int k = 0;
    int ctr = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == str1[0])
        {
            arr[k] = 0;
            ctr++;
        }
        else if (str[i + 1] == str2[1])
        {
            arr[k] = 1;
            i++;
            ctr++;
        }
        else if (str[i + 1] == str3[1])
        {
            arr[k] = 2;
            i++;
            ctr++;
        }

        k++;
    }
    for (int j = 0; j < ctr; j++)
    {
        cout << arr[j];
    }
}