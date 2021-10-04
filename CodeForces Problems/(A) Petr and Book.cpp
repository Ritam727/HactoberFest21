#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(j, k, in) for (int i=j ; i<k ; i+=in)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
typedef vector<int> VI;
 
const int N=1e7+5;
ll arr[N];
 
 
void solve ()
{   
  
  ll n;cin>>n;
 
  ll arr[7];
 
  FOR(0,7,1)
  {
    cin>>arr[i];
  }
 
  ll ans=arr[0];
  ll a=0;
  while(ans<n)
  {
    a++;
    a=a%7;
    ans=ans+arr[a];
  }

  cout<<a+1;
}
 
 
 
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
 
  //ll t;cin>>t;
  //while(t--)
  //{
    //cout<<solve()<<"\n";
    solve();
  //}
}
