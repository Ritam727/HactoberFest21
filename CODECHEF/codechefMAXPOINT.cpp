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
    
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int ans=0;
    for(long long int i=0; i<=20;i++)
        for(long long int j=0; j<=20;j++)
            for(long long int k=0; k<=20;k++)
            {
                {
                    {
                        if((i*a+j*b+k*c)<=240)
                            ans=max(ans,(i*x+j*y+k*z));


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
        
        
 