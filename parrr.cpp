#include <iostream>
using namespace std;

/* Function to swap the elements */

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
	int a[] = {1,3,43,62,16,155,64};

	int n = sizeof(a)/sizeof(a[0]);

	int pivotindex =  2;
	
	int pivot = a[pivotindex];

	cout << n << endl;
	int i=0;
	int j=n-1;

	swap(&a[pivotindex],&a[i]); 

	do
	{
		do
		{
			i++;
		}while (a[i] <= pivot);

		do
		{
			j--;
		} while (a[j] >= pivot);

		if( i < j)
			swap(&a[i],&a[j]);
	}while(i <= j);
    
    a[0] = a[j];
    a[j] = pivot;

    for (int i = 0; i < n; ++i)
    {
    	cout << " " << a[i] << " ";
    }

	return 0;
}