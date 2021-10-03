/*Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].*/
/*It is a GFG problem*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        int max=n+1;
        for(int i=0; i<n;i++){
            arr[i]=(arr[arr[i]]%max)*max+arr[i];
        }
        for(int i=0; i<n; i++){
            arr[i]=arr[i]/max;
        }
    }
};

int main(){
    int t;
    //testcases
    cin>>t;
    while(t--){
        int n;
        //size of array
        cin>>n;
        long long A[n];
    }
}