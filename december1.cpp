#include<iostream>
using namespace std;
int largest(int arr[], int n)
{
    int i;
 
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int main()
{
	int n,sum=0;
	cout<<"Enter number of runs:";
	cin>>n;
	int arr[n];
	for (int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
		cout<<" ";
	}
	cout<<endl;
	cout<<"Sum of the runs is :"<<sum;
	int maximum_number=largest(arr,n);
	
	for (int i=0;i<=n-1;i++)
	{
		if (arr[i]== maximum_number)
		{
			cout<<"\nIndex of the highest run is :"<<i;
		}
	}
}
/*
   Input: 
   5 
   20 35 40 15 25

   Output:
   135 
   2
*/
