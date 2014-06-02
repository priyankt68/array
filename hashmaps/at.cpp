#include <iostream>
#include <string>
#include <map>
// /using namespace std;

int main()
{

	std::map<std::string,int> mymap = {{"Priyank",1},{"Trivedi",2},{"is",3}};


	mymap.at("Priyank") = 10;

	for(auto& x:mymap){
		std::cout << x.first << ":" << x.second << "\n";
	}

	int n=10;
	std::map<int,int> mymap1;

	for (int i = 0; i < n; ++i)
	{
		mymap1[i] = i*2;
	}

	for (std::map<int,int>::iterator it = mymap1.begin(); it!=mymap1.end();++it)
		{
			std::cout << it->first << "==>" << it->second <<std::endl;
		}
	return 0;
}

