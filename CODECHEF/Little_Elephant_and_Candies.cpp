#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            c-=x;
        }
        if(c>=0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}