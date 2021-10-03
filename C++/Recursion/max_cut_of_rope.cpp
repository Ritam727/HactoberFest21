#include<iostream>
using namespace std;
int max_cut(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    return max(max_cut(n-a,a,b,c),max(max_cut(n-b,a,b,c),max_cut(n-c,a,b,c)))+1;
    
}

int main(int argc,char* argv[])
{
    int  n,a,b,c;
    cin>>n>>a>>b>>c;

    cout<<max_cut(n,a,b,c);
       
 
    
}