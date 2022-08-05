//WAP to reverse a array
//Method 1
#include<iostream>
using namespace std;
void reverse_array(int arr[],int n)
{
	int l=0,r=n-1;
	while(l<r)
	{
		int temp=arr[l];
		
		arr[l]=arr[r];
		arr[r]=temp;
		
		l++;
		r--;
	}
	
 ;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int arr2[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse_array(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

#Method 2
#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before Reverse:";
	for(int i=0;i<n;i++)
	{
	
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"After Reverse:";
	for(int i=n-1;i>=0;i--)
	{
		
		cout<<arr[i]<<" ";
	}
	return 0;
}

