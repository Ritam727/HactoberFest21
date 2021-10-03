#include<iostream>
using namespace std;
int main()
{
  int x,i;
  cin>>x;
  for(i=0;i<x;i++){
    int n,i,j,max=0,m=0;cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
      int count=0;
      for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
          count++;
        }
        if(count>=max){
          max=count;
          m=arr[i];
        }
      }
    }
    cout<<m<<endl;
  }
}
