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
const int N=1e7+5;

using namespace std ;
#define SIZE 26




 
  long long int a[N],c[N];
  

 
   int arra(long long int n)
   {
    long long int temp=c[0];
    for(int i=0;i<n-1;i++)
    c[i]=c[i+1];
  c[n-1]=temp;
  
  
  return 0;
    
   } 
   


long long int  testcase ()
{ long long int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  
  }
   for(int i=0;i<n;i++)
   {
    cin>>c[i];
    
   }
 
   
  long long int ans=999999;
   
   for(int i=0;i<n-1;i++)
   {
       long long int ans1=0;
     for(int i=0;i<n;i++)
     {
      ans1+=ans1*10+(a[i]+c[i])%n);
     }
     
    if(ans1<ans)
    ans=ans1;
    
    arra(n);
   }
   string s1=to_string(ans);
   for(int i=0;i<n;i++)
    cout<<s1[i]<<" ";

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  long long int  t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    testcase();
    cout<<"\n";
  }
}