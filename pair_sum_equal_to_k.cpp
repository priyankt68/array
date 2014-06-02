#include <iostream>

using namespace std;




int main(int argc, char const *argv[])
{
	
	int arr[] = {-1,1,2,3,5,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k=0;
	int *prefix_sum = new int[n-1];
	for (int i = 0; i < n-1; ++i)
	{
		
			prefix_sum[i] = arr[i] + arr[i+1];
			if (prefix_sum[i] == k)
			{
				cout << arr[i] << ", " << arr[i+1] << endl;
 			}
		
	}


	return 0;
}