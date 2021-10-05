#include<bits/stdc++.h>
#define pii pair<int, int>
#define fori(s,n) for(int i=s;i<n;i++)
#define forvi(v) for(auto i = v.begin(); i != v.end(); i++)
#define val(x) (*x)
#define ll long long
#define umii unordered_map<int,int>
#define usi unordered_set<int>
#define takeinputarray(arr,n) fori(0,n){cin>>arr[i];}
#define printarray(arr,n) fori(0,n){cout<<arr[i]<<' ';}cout<<endl;
#define takeinputvector(v,n) fori(0,n){int x;cin>>x;v.push_back(x);}
#define printvector(v) forvi(v){cout<<val(i)<' ';}

using namespace std;

int maxPawns(string a,string b,int n){
    int count = 0;
    char zero = '0',one = '1',two = '2';
    if (a[0] == zero)
    {
        if (b[0] == one)
        {
            b[0] = two;
            count++;
        }
    }
    else
    {
        if (b[1] == one)
        {
            b[1] = two;
            count++;
        }
    }
    // cout<<"a became "<<a<<endl<<"b became "<<b<<endl<<"count became "<<count<<endl<<endl;
    fori(1,n-1){
        if(a[i]==zero){
            if(b[i]==one){
                b[i]=two;
                count++;
            }
        }
        else{
            if(b[i-1]==one){
                b[i-1]=two;
                count++;
            }
            else if(b[i+1]==one){
                b[i+1]=two;
                count++;
            }
        }
    }
    if (a[n-1] == zero)
    {
        if (b[n-1] == one)
        {
            b[n-1] = two;
            count++;
        }
    }
    else
    {
        if (b[n-2] == one)
        {
            b[n-2] = two;
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        cout<<maxPawns(a,b,n)<<endl;
    }

    cout<<endl;
    return 0;
}