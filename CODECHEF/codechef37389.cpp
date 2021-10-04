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
#define ll long long int
#define FOR(j, a, in) for (ll i=j ; i<a ; i+=in)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define SWAP(x, y) do { typeof(x) SWAP = x; x = y; y = SWAP; } while (0)

const int N=1e7;
ll arr[N];


using namespace std;


void testcase()
{
    
     ll n;

     cin>>n;
  ll k;

  cin>>k;
  vector<pair<ll,ll>>v;
  FOR(0,n,1)
  {
    ll x;


    cin>>x;


    v.PB({x,i});
  }

  sort(v.begin(),v.end());

  vector<pair<ll,ll>> s;

  for(ll i=n-k;i<n;i++)
  {
    ll a1=v[i].first;
    ll a2=v[i].second;
    
    s.PB({a1,a2});
  }


  ll a=k;


  if(k&1)


  k=k/2;
  else


  k=k/2-1;

  ll ans=s[k].first;


  cout<<ans<<"\n";


  std::sort(s.begin(), s.end(), [](auto &left, auto &right) {
    return left.second < right.second;
});


  FOR(0,a,1)
  {
    cout<<s[i].first<<" ";
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
     
    testcase();
    cout<<"\n";
    }
                
        
        
 }