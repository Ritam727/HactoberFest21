#include <iostream>
using namespace std;
class sol{
    
public:
void fun(int a,int arr[]){
    for(int i=1;i<a;i++){
        arr[0]+=arr[i];
         
    }
    cout<<arr[0];
}
void insert(int a,int arr[]){
        for (int i=0;i<a;i++)
        cin>>arr[i];

}
};
    
    
    

int main(){
    
    int a;
    
    cin>>a;
    int arr[a];

    sol obj;
    obj.insert(a,arr);


    

    
    
    
    obj.fun(a, arr);
    
    
    
    return 0;
    
}
