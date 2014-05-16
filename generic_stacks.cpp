#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;


template <class T>
class Stack {

	private:
		vector<T> elems;  //elements

	public:
		void push(T const&)  ;//pushing the element into the stack
		T pop();
		T top() const; // return top element
		bool empty() const{
			return elems.empty();
		}

};


template <class T>
void Stack<T> :: push( T const& elem)
{

	elems.push_back(elem);
}


template <class T>
T Stack<T> :: pop()
{
	if ( elems.empty())
	{
		throw out_of_range("Stack<>::pop() :: empty stack");
	}
	else
		elems.pop_back();
}

template <class T>
T Stack<T>::top () const
{

	if (elems.empty())
	{
		throw out_of_range("Stack<>::top(): empty stack");
	}

	return elems.back();
}


int main(int argc, char const *argv[])
{
	
	Stack<int> intStack;  //stack of ints
	Stack<string> stringStack;  // stack of strings

	intStack.push(10);
	intStack.push(11);
	intStack.push(12);
	intStack.pop();
	cout << intStack.top()<<endl;



	return 0;
}


