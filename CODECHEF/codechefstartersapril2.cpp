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
    
     int n,m,x,y;
    cin>>n>>m>>x>>y;
   string s;
   for(int i=1;i<=n;i++)
   {
    cin>>s;
    int p=0;
    int f=0;
    int u=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=="U")
            u++;
        else if(s[i]=="F")
            f++;
        else if(s[i]=="P")
            p++;
    

    }
    if(f>=x)
        cout<<"YES";
    else if(f>=(x-1)&&p>=y)
        cout<,"YES";
    else
        cout<<"NO";
}


   }
    
    int ans=min(sw,sf);
    if(ans<d)
        cout<<"NO";
    else
        cout<<"YES";


    
    
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