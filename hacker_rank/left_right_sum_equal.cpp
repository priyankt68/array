#include <iostream>
using namespace std;

int check_left_right_sum(int arr[], int n)
{
	int prefix_sum[n] ;
	int suffix_sum[n] ;
	 prefix_sum[0] = arr[0];
	 suffix_sum[0] = arr[n-1];
	

	for (int i = 0,j= n-1; i < n,j>0; ++i,++j)
	{
		prefix_sum[i] += prefix_sum[i];
		cout << prefix_sum[i] << endl;
		suffix_sum[j] += suffix_sum[j];
		cout << suffix_sum[j] << endl;

	}

	return 0;
}


int main(int argc, char const *argv[])
{

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{	
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
 check_left_right_sum(arr,n);
		//cout << << endl;
	}

	return 0;
}