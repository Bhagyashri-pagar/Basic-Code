// WAP to find Kth smallest eleemnt
#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()

{
	int n,k;
	cout<<"Enter array size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	sort(arr,arr+n);
	cout<<"Enter Kth smallest eleemnt";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(i==k)
		{
			
			cout<<arr[i-1];
		}
	
	}
	return 0;
}

