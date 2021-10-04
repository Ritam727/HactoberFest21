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

#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007



typedef long long int lli;
typedef unsigned long long int  ulli;
typedef long double ld;




using namespace std;

ulli highest(ulli n)
{
    return (n&(~(n-1)));
}
void testcase()
{
    
    ulli n;
    cin>>n;
    


    bool dp[N1+1]={0};
  dp[1]=true;
  dp[2]=false;
  for(ll i=3;i<N1+1;i++)
  {
  if(ceil(log2(i)) == floor(log2(i)))
  dp[i]=true;
  else if(i&1)
  dp[i]=!dp[i-1];
  else
  {
    bool flag=false;
    ll k=i;
    ll k1=__builtin_ctz(k);
    while(k1>=1)
    {
      ll x=k/(1<<k1);
      if(dp[x]==0)
      {
        flag=true;
      }
      k1--;
    }
    if(flag)
    dp[i]=1;
    else
    dp[i]=0;
  }
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


const int N1=1e5+5;






int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  
  debug(N1);
  
  
  ll t;cin>>t;
  debug(t);
  while(t--)
  {
    ll n;cin>>n;
    if(dp[n]==false)
    cout<<"Bob"<<"\n";
    else
    cout<<"Alice"<<"\n";
  }  
}
  //GOOGLE
  //FOR(0,t,1)
  //{
  //  cout<<"Case #"<<i+1<<": "<<solve()<<"\n";
  //}

  //CODEFORCES
  //cout<<solve()<<"\n";