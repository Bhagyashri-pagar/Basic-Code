//Find the maximum and minimum element in an array
#include<iostream>
using namespace std;
//Using Sorting
//Method 1
void finMinMax(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Minimum Element in array:";
	cout<<arr[0]<<endl;
	
	cout<<"Maximum Element in array:";
	cout<<arr[n-1];
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	finMinMax(arr,n);
	return 0;
}

//Method 2
#include<iostream>
using namespace std;
void find_Min_Max(int arr[],int n)
{
	int min=arr[0],max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
		{
		 max=arr[i];
		}
		else if(min>arr[i])
		{
			min=arr[i];
		}

	}
	cout<<"Maximum Element:"<<max<<endl;
	cout<<"Maximum Element:"<<min;
	
}
int main()
{
	int n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	find_Min_Max(arr,n);
	
	return 0;
}
