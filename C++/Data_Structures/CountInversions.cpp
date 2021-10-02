#include <bits/stdc++.h>
using namespace std;
int merge(vector<int>& input,int start,int mid,int end){
    int i = start;
    int j = mid+1;
    vector<int> temp;
    int count = 0;
    while(i<=mid&&j<=end){
        if(input[i]>input[j]) {
            count+=mid-i+1;
            temp.push_back(input[j]);
            j++;
        }
        else {
            temp.push_back(input[i]);
            i++;
        }
    }
    while(i<=mid) temp.push_back(input[i++]);
    while(j<=end) temp.push_back(input[j++]);
    for(int i = start;i<=end;i++) input[i] = temp[i-start];
    return count;
}
int countInversions(vector<int>& input,int start,int end){
    int inversions = 0;
    if(start>=end) return 0;
    else {
        int mid = (start+end)/2;
        inversions+= countInversions(input,start,mid);
        inversions+= countInversions(input,mid+1,end);
        inversions+= merge(input,start,mid,end);
    }
    return inversions;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> input(n);
        for(int i = 0;i<n;i++) cin>>input[i];
        cout<<countInversions(input,0,n-1)<<endl;
        for(int i = 0;i<n;i++) cout<<input[i]<<" ";
    }
    return 0;
}
