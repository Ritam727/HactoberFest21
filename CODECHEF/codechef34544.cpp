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

using namespace std ;
#define SIZE 26
int largestSquare(int n)
{
  int i = 0;
  if((pow(n,0.5)-floor(pow(n,0.5)))==0.0)
   return int(pow(n,0.5));
   else
   {
  while ((i+1)*(i+1) < n) 
  {
    ++i;
  }
  return i;
   }
}

 
    
   


long long int  testcase ()
{  
  long long int n,a;
  cin>>n>>a;
   
  cout<<largestSquare(n)*a;





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