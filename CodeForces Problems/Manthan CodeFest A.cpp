#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef unsigned long long ull;
typedef long double lld;
#define FOR(j, a, in) for (ll i=j ; i<a ; i+=in)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mod 1000000007
typedef vector<ll> VI;
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
const int N=1e7;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

ll arr[N];


void solve()
{
  ll a,b,c;
  cin>>a>>b>>c;

  if(c%__gcd(a, b)==0)
  {
    ll flag=0;
    FOR(0,10000,1)
    {
      ll ans=c-b*i;
      if(ans>=0)
      {
        if(ans%a==0)
        {
          cout<<"Yes";
          return;
        }
      }
      
    }
    cout<<"No";
    return;
  }
  else
  {
    cout<<"No";
  }
}


int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);

 /* ll t;cin>>t;
  debug(t);
  while(t--)
  {
    solve();
    cout<<"\n";
  }*/
  //GOOGLE
  //FOR(0,t,1)
  //{
  //  cout<<"Case #"<<i+1<<": "<<solve()<<"\n";
  //}

  //CODEFORCES
  //cout<<solve()<<"\n";

  solve();
}
