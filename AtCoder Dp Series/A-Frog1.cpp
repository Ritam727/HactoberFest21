#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    long long dp[n+1];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    dp[1] = 0;
    dp[2] = abs(arr[0]-arr[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i+1] = min(dp[i]+abs(arr[i-1]-arr[i]),dp[i-1]+abs(arr[i-2]-arr[i]));
    }
    cout<<dp[n]<<endl;

}