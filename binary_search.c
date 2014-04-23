/*

Binary search problem, assumes the input array to be sorted.

*/
#include <iostream>
using namespace std;

int binarysearch(int arr[],int,int,int);
int main()
{

	cout << "Enter the number of elements" << endl;

	int n;

	cin >> n;
	int arr[n];

	cout << "Enter the elements" << endl;

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Size of array input is:" << size;

	cout << "Enter the number to search for";

	int num;

	cin >> num;

	int result = binarysearch(arr,0,size,num);

	if(result)
		cout << "element" << num << " found" << result << "\n";
	else
		cout << "element" << num << " not found" << "\n";

return 0;
}


int binarysearch(int arr[],int low, int high,int num)
{

	int n = sizeof(arr) / sizeof(arr[0]);

	
	int mid = low + ((high - low) / 2);

		if(arr[mid] == num)
			return mid;
		else if (arr[mid] > num)
			 return binarysearch(arr,mid+1,high,num);
		 else if (arr[mid] < num)
		 	return binarysearch(arr,low,mid-1,num);
		 else
		 	return 0;

}


