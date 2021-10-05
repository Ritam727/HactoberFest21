 /* Author : VANSH KAPILA */
 
/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/
 
#include <bits/stdc++.h> 
#define pb(x) push_back(x) 
#define all(x) x.begin(), x.end() 
#define debug(x) cout << '>' << #x << ':' << x << endl; 
#define int long long 
#define ld long double 
#define endl "\n"; 
 
#define f(a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i>b;i--)
 
const int mod = 1000000007; 
using namespace std; 
  
  
int32_t main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 
 
    int test; 
    cin>>test; 
    while(test--){ 
        int n;
        int x;
        cin>>n>>x;
        int arr[n];
        int dup[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            dup[i]=arr[i];
        }
        
        sort(dup,dup+n);
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=dup[i] and i<x and n-1-i<x)
            {
                ans=false;
                break;
            }
        }
        if(ans==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    } 
    return 0; 
    } 
