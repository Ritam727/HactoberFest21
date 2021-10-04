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
int anscount(int a[][],int b,int n,int m)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)  
        {
            s+=abs(a[i][j]-b);

        }     
    }
    return s;
    
}

void testcase()
{
    
     int n,m;
    cin>>n>>m;
    
    int a[n][m];
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)  
        {
            cin>>a[i][j];

        }     
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)  
        {
            if(anscount(a,a[i][j],n,m)>ans)
            {
                ans=anscount(a,a[i][j],n,m);
            }
        }     
    }
    cout<<ans;
    

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
     
    testcase();
    cout<<"\n";
    }
                
        
        
 }