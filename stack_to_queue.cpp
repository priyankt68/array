#include <iostream>
#include <vector>
#include <stack>
#include <stdexcept>
using namespace std;

class stack_to_queue
{
public:

	void push(int);
	int pop();
	void setSize(int);
	stack_to_queue();
	~stack_to_queue();
private:

	std::vector<int> v;
	int size;
};

stack_to_queue::stack_to_queue()
{
	cout << "Object is created for stack" << endl;
}

stack_to_queue::~stack_to_queue()
{

}

void stack_to_queue::setSize(int s)
{
	size =s;
}
void stack_to_queue::push(int n)
{
	v.push_back(n);
}
int stack_to_queue::pop()
{
	if(v.empty())
	{
		throw out_of_range("Stack<int> pop :: empty stack");
	}
	else
		v.pop_back();
}


int main(int argc, char const *argv[])
{

	stack_to_queue obj;
	int si;
	obj.setSize(si);
	cout << "Enter the size of the stack" << endl;
	cin >> si;
	cout << " Pushing elements into the stack";
	for (int i = 0; i < si; ++i)
	{
	obj.push(i+1);
	}
	




	return 0;
}