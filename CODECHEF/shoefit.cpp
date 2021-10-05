#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int left=0,right=0;
        for(int i=0;i<3;i++){
            if(arr[i]==1){
                right++;
            }
            else{
                left++;
            }
        }
        if(right>0 && left>0){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
        
    }
    return 0;
}