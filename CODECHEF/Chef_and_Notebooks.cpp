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
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        x=x-y;
        int c=0;
        for(int i=0;i<n;i++)
        {
            int p,q;
            cin>>p>>q;
            if(p>=x && q<=k)
            {
                c++;
            }
        }       
        if(c!=0)
        {
            cout<<"LuckyChef\n";
        }
        else
        {
            cout<<"UnluckyChef\n";
        }
    }
    return 0;
}