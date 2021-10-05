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
  
  ll n;
  cin >> n;
  
  ll m;cin>>m;

  double ma=0;
  ll a=-1;
  FOR(0,n,1)
  {
    double x;cin>>x;

    if(ceil(x/m)>=ma)
    {
      ma=x/m;
      a=i+1;
    }
  }

  cout<<a;

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
