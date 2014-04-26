/* Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures 


Given a string: priyannk




1. start from i 
2. Compare it for all the sub arrays
	if it finds an element which is equal to any other element in that sub-array, 
*/
#include <iostream>
#include <string>
using namespace std;

void printarray(int arr[], int l)
{
//	int t= sizeof(arr) / sizeof(arr[0]);
	

	for (int i = 0; i < l; i++)
	{	
			
			cout << arr[i] << "\t";	
			//cout << "\n";
	}
}

void _initialise(int arr[ ],int length)
{
	for (int i = 0; i < length ; ++i)
	{
		arr[i]=0;
	}
}
int main()
{
	string s ;

	cout << "Enter the string";
	cin >> s;

	//cout << s << endl;

	

	cout << "length of the input string" << s.length() << endl;
	//string hash[length];

	int length = s.length()	;
	int flag[s.length()];

	_initialise(flag,length);
l
	//cout << "afdfgd = "<< flag[5] << endl;
	printarray(flag,length);
	for(int i=0;i<length;i++)
	{
		for(int j=i;j<length;j++)
		{
			if(!s[i].compare(s[j]))
				{
					flag[i]=1;
				}
				
		}
	}


	printarray(flag,length);

	/*if(flag == 1)
			cout << "Not unique";
		else
			cout << "unique";	
		
		flag=0;
*/
return 0;
}

