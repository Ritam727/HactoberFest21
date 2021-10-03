#include<bits/stdc++.h>
using namespace std;
 
 
long long dp[101][100001];
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,w;
    cin>>n>>w;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (j>=arr[i-1][0])
            {
                dp[i][j] = max(dp[i-1][j],arr[i-1][1]+dp[i-1][j-arr[i-1][0]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }   
        }
        
    }
 
    cout<<dp[n][w];
}