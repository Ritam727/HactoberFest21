#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(j, a, in) for (ll i=j ; i<a ; i+=in)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define SWAP(x, y) do { typeof(x) SWAP = x; x = y; y = SWAP; } while (0)
typedef vector<ll> VI;
const int N=1e7;
ll arr[N];

bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
void solve()
{
  ll n;cin>>n;
  ll k;cin>>k;
  vector<pair<ll,ll>>v;
  FOR(0,n,1)
  {
    ll x;cin>>x;
    v.PB({x,i});
  }

  sort(v.begin(),v.end());

  vector<pair<ll,ll>> s;

  for(ll i=n-k;i<n;i++)
  {
    ll a1=v[i].first;
    ll a2=v[i].second;
    //cout<<a1<<" "<<a2<<"\n";
    s.PB({a1,a2});
  }
  ll a=k;
  if(k&1)
  k=k/2;
  else
  k=k/2-1;

  ll ans=s[k].first;
  cout<<ans<<"\n";
  sort(s.begin(),s.end(),sortbysec);

  FOR(0,a,1)
  {
    cout<<s[i].first<<" ";
  }
}


int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);

  ll t;cin>>t;
  while(t--)
  {
    solve();
    cout<<"\n";
  }

  //GOOGLE
  //FOR(0,t,1)
  //{
  //  cout<<"Case #"<<i+1<<": "<<solve()<<"\n";
  //}

  //CODEFORCES
  //solve();
}