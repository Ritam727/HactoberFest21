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
        
        int n,h;
        cin>>n>>h;
        int arr[n];
       
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        int m=arr[n-1];
        int mm = arr[n-2];
        int z = 1;
      
        double ans1 = ceil((double)(h+mm)/(m+mm));
        double ans2 = ceil((double)(h)/(m+mm)); 
        cout<<(int)min(2*ans1-1,2*ans2)<<endl;
        
    
         
       
    } 
    return 0; 
    } 
