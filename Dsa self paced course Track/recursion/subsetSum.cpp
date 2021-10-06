
#include<bits/stdc++.h>
#define pii pair<int, int>
#define fori(s,n) for(int i=s;i<n;i++)
#define forvi(v) for(auto i = v.begin(); i != v.end(); i++)
#define val(x) (*x)
#define ll long long
#define umii unordered_map<int,int>
#define usi unordered_set<int>
#define forvi(v) for(auto i = v.begin(); i != v.end(); i++)
#define takeinputarray(arr,n) fori(0,n){cin>>arr[i];}
#define printarray(arr,n) fori(0,n){cout<<arr[i]<<' ';}cout<<endl;
#define takeinputvector(v,n) fori(0,n){int x;cin>>x;v.push_back(x);}
#define printvector(v) forvi(v){cout<<val(i);}

using namespace std;

int subsetSum(int arr[], int i, int n, int rs)
{
    if (i == n)
    {
        return rs == 0;
    }
    return subsetSum(arr, i + 1, n, rs) + subsetSum(arr, i + 1, n, rs - arr[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    takeinputarray(arr, n);
    // printarray(arr,n);
    int rs;
    cin >> rs;
    cout << subsetSum(arr, 0, n, rs);

    cout << endl;
    return 0;
}