#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
 
    int arr[n+1][3];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
 
    int dp[n+1][3] = {0};
    dp[1][0]=arr[1][0];
    dp[1][1]=arr[1][1];
    dp[1][2]=arr[1][2];
 
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] = max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3])+arr[i][j];
        }
    }
 
    cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
    
}