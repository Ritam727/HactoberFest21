#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        int n,m,l;
        cin>>n>>m>>l;
        int **arr = new int*[m];
        for(int i=0;i<m;i++){
            int k;
            cin>>k;
            arr[i] = new int[k];
            for(int j=0;j<k;j++){
                cin>>arr[i][j];
            }
        }

        int *larr = new int[l];
        for(int i=0;i<l;i++){
            cin>>larr[i];
        }

        int i=0;
        while(i<l){
            
        }
    }
    return 0;
}