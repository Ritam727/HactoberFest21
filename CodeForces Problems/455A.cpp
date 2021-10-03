#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n+1];
    vector<int> v;
    map<long long,long long> m;
    int maxy =0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        if (m[arr[i]]==0)
        {
            v.push_back(arr[i]);
        }
        m[arr[i]]++;
        maxy = max(maxy,arr[i]);
    }

    long long dp[maxy+1];
    dp[0]=0;
    dp[1] = m[1];
    
    for (long long i = 2; i <= maxy; i++)
    {
        if (m[i])
        {
            dp[i] = max(dp[i-2]+(long long)m[i]*i,dp[i-1]);
        }
        else{
            dp[i] = dp[i-1];
        }
    }
    cout<<dp[maxy];
}