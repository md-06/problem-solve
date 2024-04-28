#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=(low-1);
	for (int j=low; j<=high;j++)
	{
		if (arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return (i+1);
	
}
void quicksort(int arr[], int low , int high)
{
	if (low<high)
	{
		int p=partition(arr, low,high);
		quicksort(arr,p+1,high);
		
	}
}
int main()
{
	int arr[]={12,13,14,15,16};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n; i++)
	{
		cout<<arr[i]<<" ";
		
	}
	quicksort(arr,0,n-1);

	cout<<endl<<"sorted array\n";
	for (int i=0;i<=n; i++)
	{
		cout<<arr[i]<<" ";
		
	}
	return 0;
}