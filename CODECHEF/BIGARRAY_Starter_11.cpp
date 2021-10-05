#include <iostream>
#define ull  long long
using namespace std;
ull search(ull s,ull n)
{
    ull sum=(n*(n+1))/2;
    ull start=0;
    ull end=n;
    while(start<=end)
    {
        ull mid=start+(end-start)/2;
        if(sum-mid==s)
        {
            if(mid==0)
            {mid=-1;}
            return mid;
            
        }
        else if(sum-mid>s)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
    
}
int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--)
	{
	    ull n,s;
	    cin>>n>>s;
	    ull ans=search(s,n);
	    cout<<ans<<endl;
	    
	}
	return 0;
}

