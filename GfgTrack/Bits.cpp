#include<bits/stdc++.h>
#define pii pair<int, int>
#define fori(s,n) for(int i=s;i<n;i++)
#define forvi(v) for(auto i = v.begin(); i != v.end(); i++)
#define val(x) (*x)
#define ll long long
#define umii unordered_map<int,int>
#define usi unordered_set<int>
#define takeinputarray(arr,n) fori(0,n){cin>>arr[i];}
#define printarray(arr,n) fori(0,n){cout<<arr[i]<<' ';}cout<<endl;
#define takeinputvector(v,n) fori(0,n){int x;cin>>x;v.push_back(x);}
#define printvector(v) forvi(v){cout<<val(i)<' ';}

using namespace std;

// {brian karningam algorithm
int countSetBits(int n,int res){
    if(n==0){
        return 0;
    }
    return countSetBits(res+1,n&(n-1));
}
// }

// {Lookup table method
void initializer(int table[]){
    table[0] = 0;
    fori(1,256){
        table[i] = (i&1) + table[i/2];
    }
}
int count(int n,int table[]){
    int res = 0;
    fori(0,4){
        res+=table[n & 0xff];  //0xff-hexadecimal representation for 8 set bits
        n = n>>8; 
    }
    return res;
}
// }

// {Find two odd appearing members
pii oddAppearing(int arr[], int n)
{
    int x = 0;
    fori(0,n){
        x ^= arr[i];
    }
    x -= (x & (x-1));
    int on=0,sn=0;
    fori(0,n){
        if(arr[i]&x > 0)
            on ^= arr[i];
        else
            sn ^= arr[i];
    }
    return {on,sn};
}
// }

// {binary to gray and gray to binary conversion
int binaryToGray(int n){
    return n^(n>>1);
}

bool checkPrevBit(int n, int i){
    return ((n >> (i + 1)) & 1) == 1;
}
bool checkCurrBit(int n, int i){
    return (n >> i) & 1 == 1;
}
int grayToBinary(int n){
    int x = n;
    int msb = 0;
    while (x > 0)
    {
        x = x >> 1;
        msb++;
    }
    for (int i = msb - 2; i >= 0; i--)
    {
        if (checkPrevBit(n,i))
            if (checkCurrBit(n,i))
                n -= pow(2, i);
            else
                n += pow(2, i);
    }
    return n;
}
// }

// {to get maxAND value in an array
int maxAND(int arr[], int n)
{
    // Your code here
    int mxv = arr[0];
    for (int i = 1; i < n; i++)
    {
        mxv = max(mxv, arr[i]);
    }
    int bitno = log2(mxv), value = 0;
    while (bitno >= 0)
    {
        value += pow(2, bitno);
        int count = 0, i;
        for (i = 0; i < n; i++)
        {
            if ((arr[i] & value) == value)
            {
                count++;
                if (count == 2)
                {
                    break;
                }
            }
        }
        if (i == n)
        {
            value -= pow(2, bitno);
        }
        bitno--;
    }
    return value;
}
// }