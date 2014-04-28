#include <iostream>
#include <string>
#include <bitset>


int main()
{

	std::bitset<8> foo (std::string("1001010"));

	std::cout << foo << "has";

	std::cout << foo.count() << " ones and ";

	std::cout << (foo.size()-foo.count()) << "zeros. \n";

	return 0;
}