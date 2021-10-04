#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<unordered_map>
#include<cmath>

#define rep(i,n) for(long long int i=0;i<n;i++)
#define repinv(i,n) for(long long int i=n-1;i>=0;i--)
#define for1(i,n) for(long long int i=1;i<=n;i++)
#define loop(i,a,b,k) for(long long int i=a;i<=b;i=i+k)

#define pb push_back
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define uii unordered_map<int,int>
#define vc vector<char>
#define vb vector<bool>
#define vstr vector<string>
#define vd vector<double>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define maxpq priority_queue<int,vector<int>>
#define minpq priority_queue<int,vector<int>,greater<int>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vii vector<pair<int,int>>
#define vll vector<pair<long long,long long>>
#define mp make_pair

#define modulo 1000000007
#define longmodulo 1000000000000000000
using namespace std;

ll power(ll a,ll b){
    ll temp = 1;
    while(b!=0){
        if(b%2==0){
            a=a*a;
            b=b/2;
        }
        else{
            temp = temp*a;
            a=a*a;
            b=b/2;
        }
        temp = temp%modulo;
        a = a%modulo;
    }
    return temp%modulo;
}

ll absolute(ll a){
    if(a>0)
    return a;
    return -a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x;
        cin>>x;
        int val;
        vii arr(n);
        rep(i,n){
            cin>>val;
            arr[i] = mp(val,i);
        }
        sort(arr.begin(),arr.end());
        bool checker=true;
        if(x<= n/2)
        checker=true;
        else{
            rep(i,n){
                if(arr[i].second != i){
                    if(arr[i].second >= x || n-arr[i].second >x)
                    continue;
                    
                    checker=false;
                    break;
                }
            }
        }
        if(checker)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
