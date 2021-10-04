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

  vector<pair<ll,ll>> v;
  while(n--)
  {
    ll a,b;
    cin>>a>>b;
    v.PB({a,b});
  }
  ll ans = 0;
  for(int i=0;i<v.size();i++)
  {
    ll c1=0,c2=0,c3=0,c4=0;
   // cout<<v[i].first<<" "<<v[i].second<<"\n";
    for(int j=0;j<v.size();j++)
    {
      if(j!=i)
      {
        if(v[i].first==v[j].first)
        {
          if(v[j].second<v[i].second)
          c1++;
          else if(v[j].second>v[i].second)
          c2++;
        }
        else if(v[j].second==v[i].second)
        {
           if(v[j].first<v[i].first)
           c3++;
           else if(v[j].first>v[i].first)
           c4++;
        }
      }
    }
    if(c1>0 && c2>0 && c3>0 && c4>0)
    ans++;
  }

  cout<<ans;

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
