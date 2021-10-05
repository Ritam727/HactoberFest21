#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

struct llhash
{
    int size;
    list<int> *table;
    llhash(int x)
    {
        size = x;
        table = new list<int>[x];
    }
    int hashfunc1(int key)
    {
        return key % size;
    }
    void insertkey(int key)
    {
        int i1 = hashfunc1(key);
        table[i1].push_back(key);
    }
    bool search(int key)
    {
        int i1 = hashfunc1(key);
        for (auto i = table[i1].begin(); i != table[i1].end(); i++)
            if (*i == key)
                return true;

        return false;
    }
    void remove(int key)
    {
        int i1 = hashfunc1(key);
        table[i1].remove(key);
    }
};

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cout << "enter no of keys: ";
    cin >> n;
    llhash hs(10);
    while (n--)
    {
        int x;
        cin >> x;
        hs.insertkey(x);
    }
    cout << "56 in list: " << hs.search(56) << endl;
    hs.remove(56);
    cout << "56 in list: " << hs.search(56) << endl;
    return 0;
}