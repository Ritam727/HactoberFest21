#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
int findNextPrime(int n)
{
    int nextPrime = n;
    bool found = false;

    if (isPrime(nextPrime))
        found = true;
    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }
    return nextPrime;
}

struct doublehash
{
    int size, *arr, count, **parr;
    doublehash(int n)
    {
        size = findNextPrime(n);
        arr = new int[size];
        parr = new int * [size];
        for (int i = 0; i < size; i++)
            arr[i] = -1;
        count = 0;
    }

    int h1(int key)
    {
        return key % size;
    }
    int h2(int key)
    {
        return (size-1) - (key % (size-1)); //for double hashing
        // return 1; //for linear probing
    }

    void insert(int key)
    {
        int probe = h1(key);
        int offset = h2(key);
        while (arr[probe] != -1 && arr[probe] != -2)
        {
            probe = (probe + offset) % size;
            if (probe == h1(key))
                break;
        }
        if (probe == h1(key) && arr[probe] != -1 && arr[probe] != -2)
            ;
        else
            arr[probe] = key;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    bool search(int key)
    {
        int probe = h1(key);
        int offset = h2(key);
        while (arr[probe] != key)
        {
            probe = (probe + offset) % size;
            if (probe == h1(key) || arr[probe]==-1)
                return false;
        }
        return true;
    }
    void dlt(int key)
    {
        int probe = h1(key);
        int offset = h2(key);
        while (arr[probe] != key)
        {
            probe = (probe + offset) % size;
            if (probe == h1(key))
                break;
        }
        if (arr[probe] == key)
            arr[probe] = -2;
    }
};

int main()
{
    //	ios_base::sync_with_stdio(false);
    //	cin.tie(NULL);
    int n, key;
    cout << "Enter the no of keys to be inserted: " << endl;
    cin >> n;
    doublehash lph(n);
    lph.print();
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        lph.insert(key);
        lph.print();
    }
    cout << lph.search(63) << endl;
    lph.dlt(63);
    lph.print();
    cout << lph.search(63) << endl;
    return 0;
}