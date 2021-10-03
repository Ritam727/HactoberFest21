#include <bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int left[n],right[n];
  vector<int> product;
  left[0] = 1;
  for(int i=1;i<n;i++)
  {
     left[i]=left[i-1]*arr[i-1]; 
  }
  right[n-1]=1;
  for(int i=n-2;i>=0;i--)
  {
     right[i]=right[i+1]*arr[i+1];
  } 
  for(int i=0;i<n;i++)
  {
     product.push_back(left[i]*right[i]);
  }
  for(int i=0;i<n;i++)
  {
     cout<<product[i]<<"  "; 
  }
  return 0;
}
