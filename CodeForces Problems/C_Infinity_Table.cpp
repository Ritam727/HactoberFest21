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
        int a=1,x=1,i=1,n;
        cin>>n;

        while(n>=x+a)
        {
            x+=a;
            a+=2;
            i++;
        }       
        // cout<<x<<" "<<i<<"v\n";
        int r = n-x+1;

        if(r<=i)
        {
            cout<<r<<" "<<i<<"\n";
        }
        else
        {
            cout<<i<<" "<<2*i-r<<"\n";
        }
    }
    return 0;
}