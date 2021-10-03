#include<iostream>
using namespace std;
void sortArrays(int arr[], int length)
{
    for (int j = 0; j < length - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];      
            arr[j + 1] = temp;        
              j = -1;                
        }                            
    }                                 
for(int i=0;i<length;i++){cout<<arr[i]<<endl;}
}
int main(){
int a[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
int size = sizeof(a)/sizeof(a[0]);
sortArrays(a,size);
     return 0;
}
