#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        vector<int> arr2;
        int a[n];
        cin>>a[0];
        int max=a[0],min=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            arr.emplace_back(a[i]);
            arr2.emplace_back(a[i]);
        }
        vector<vector<int>> ans3;
        for(int i=0;i<n;i++){
            ans3.emplace_back(a[i]);
            max=a[i];
        }
        cout<<max<<"\n";
    }
    return 0;
}