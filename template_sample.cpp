#include <iostream>
using namespace std;



template <class T>

T large(T n1, T n2)
{

	return n1>n2 ? n1:n2;
}


int main(int argc, char const *argv[])
{
	


	int i1,i2;
	float f1,f2;

	cin>>i1>>i2;
	cout << large(i1,i2);

	cin >> f1>>f2;

	cout << large(f1,f2);
	return 0;
}