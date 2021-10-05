#include<iostream>

using namespace std;

void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

int partition(int arr[],int l,int r)
{
	int i=l-1;
	int pi=arr[r];
	int j;
	for(j=l;j<r;j++)
	{
		if(arr[j]<pi)
		{
		i++;
		swap(arr,i,j);
    	}
	}
	swap(arr,i+1,r);
	return i+1;
}
void quicksort(int arr[],int l,int r)
{
	if(l<r)
	{
		int pi=partition(arr,l,r);
		
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,r);
	}
}
int main()
{
	int arr[]={2,5,6,4,1,8,7};
    quicksort(arr,0,6);
	for(int j=0;j<7;j++)	
	cout<<arr[j]<<" ";
}

