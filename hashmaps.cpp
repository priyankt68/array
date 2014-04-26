#include <iostream>
#include <map>


int main()
{

	std::map<int,std::string> m;  // creating a hash map

	std::string s = "priyank";

	for(int i=0; i < (sizeof(s)/sizeof(s[0])); i++)
	{
		m.insert( std::pair<int,std::string>(i,s[i]));   // insert key-value pair to the created hash-map
	}


	std::map<int,std::string>::iterator it = m.begin();



}