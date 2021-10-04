#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;

void testcase()
{
    
     int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];

    }

    int m=0;
    for(int i=0;i<n; i++)
        if(arr[i]%2==0)
            m++;
    if (m==0 ||m==n)
    {
        cout<<"-1";
        return ;
    }
    for(int i=0;i<n;i++)
        if (arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    for(int i=0;i<n;i++)
        if (arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }


}

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
     cout<<"\n";
    testcase();
    }
                
        
        

}