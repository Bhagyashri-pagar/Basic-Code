#include<iostream>
using namespace std;
int main()
{
	int n,m,i=0,j=0;
	cin>>n>>m;
	int arr[n];
	int arr1[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	while(i<n && j<m)
	{
	
			if(arr[i]<arr1[j])
			{
				cout<<arr[i++]<<" ";
			}
			else if(arr[i]>arr1[j])
			{
				cout<<arr1[j++]<<" ";
			}
			else if(arr[i]==arr1[j])
			{
				cout<<arr[i]<<" ";
				i++;
				j++;
			}
			
		}
	
while(i<n)
{
	cout<<arr[i++]<<" ";
}
while(j<m)
{
	cout<<arr1[j++]<<" ";
}
	
	return 0;
}
