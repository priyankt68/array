/*


Given an array A[] and a number x, check for pair in A[] with sum as x

*/


#include <iostream>
#include <string>
#include <map>
// /using namespace std;

int main(int argc, char const *argv[])
{

	if (argc != 2)

	{
		std :: cout << "Usage : ./count.cpp <key>" << std::endl;
		exit(1);
	}
	int k = atoi(argv[1]);

	int arr[] {-1,1,2,3,4,7,8,5};

	int size = sizeof(arr) / sizeof(arr[0]);
	
	std::map<int,int> mymap1;   // defining a hashmap and it's values are auto-initialised.


int t;		
 

	for (int i = 0; i < size; i++)
	{

		t = k - arr[i];
		if(mymap1[t] == 1 )
		{
			std:: cout << arr[i] << "," <<  t << std::endl;
		}
		mymap1[arr[i]] = 1;
	}
	


	return 0;
}

