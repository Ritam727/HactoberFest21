#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

struct lp_hash
{
    int size;
    int *arr;

    lp_hash(int n)
    {
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = -1;
        size = n;
    }

    int hash(int key)
    {
        return key % size;
    }

    void insert(int key)
    {
        int i = hash(key);
        while (arr[i] != -1)
        {
            i = hash(i + 1);
            if (i == hash(key))
                break;
        }
        if (arr[i] == -1)
            arr[i] = key;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    bool srch(int key)
    {
        int i = hash(key);
        while (arr[i] != key)
        {
            i = hash(i + 1);
            if (arr[i] == key)
                return true;
            else if (arr[i] == -1)
                return false;
            else if (i == hash(key))
                return false;
        }
        return true;
    }
    void dlt(int key)
    {
        int i = hash(key);
        while (arr[i] != key && arr[i] != -1)
        {
            i = hash(i + 1);
            if (i == hash(key))
                break;
        }
        if (arr[i] == key)
            arr[i] = -2;
    }
};

int main()
{
    //	ios_base::sync_with_stdio(false);
    //	cin.tie(NULL);
    int n, x, key;
    cout << "Enter the no of slots: ";
    cin >> n;
    lp_hash lph(n);
    lph.print();
    cout << "Enter the no of keys to be inserted: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> key;
        lph.insert(key);
    }
    lph.print();
    cout << lph.srch(15) << endl;
    lph.dlt(51);
    lph.print();
    cout << lph.srch(15) << endl;
    cout << lph.srch(54) << endl;
    lph.dlt(54);
    lph.print();
    cout << lph.srch(54) << endl;
    return 0;
}