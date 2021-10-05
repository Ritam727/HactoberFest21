#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int p=2*n;
        vector<int> a;
        for(int i=0;i<p;i++)
        {
            int x;
            cin>>x;
            a.emplace_back(x);
        }
        sort(a.begin(),a.end());
        
        int ans=100000;
        for(int i=0;i<p;i++)
        {
            for(int j=i+1;j<p;j++)
            {
                
                if(i!=j)
                {
                    int k=1;
                    int sum=0;
                    for(int z=0;z<p;z++)
                    {
                        if(z!=i && z!=j)
                        {
                            if(k&1)
                            {
                                sum+= (-1)*a[z];
                            }
                            else
                            {
                                sum+= a[z];
                            }
                            k++;
                        }
                    }
                    ans=min(ans,sum);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}