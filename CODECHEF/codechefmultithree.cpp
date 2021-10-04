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
#define mod 1000000007

typedef long long int ll;
typedef long int  li;
using namespace std;

void testcase()
{
    
      ll k,d0,d1;
    cin>>k>>d0>>d1;
    
    ll sum=d0+d1;
    int d=sum%10;
    int n=2;
    
    while(d!=8&&d!=0)
    {
      sum+=d;
      n++;
      d=sum%10;
    }
    k-=n;
    if(k%4==0)
    sum+=20*k/4;
    else
    {
    sum+=20*k/4;
    if(k%4==1)
        sum+=8;
    else if(k%4==2)
        sum+=10;
    else if(k%4==3)
        sum+=16;
    }
    
    

    
    
    if(sum%3==0)
        cout<<"YES";
    else 
        cout<<"NO";
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