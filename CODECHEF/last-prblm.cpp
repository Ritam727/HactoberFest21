#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;

    int arr[100][100]={0};
    arr[0][0]=1;
    for(int i=1;i<100;i++){
        arr[i][0]=arr[i-1][0]+(i+1);
    }
    for(int i=0;i<100;i++){
        for(int j=1;j<100;j++){
            arr[i][j]=arr[i][j-1]+(j+i);
        }
    }

    while(t--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum=0;
        for(int i=y1-1;i<y2;i++){
            sum+=arr[i][x1-1];
        }
        for(int i=x1;i<x2;i++){
            sum+=arr[y2-1][i];
        }

        cout<<sum<<"\n";
    }

    return 0;
}