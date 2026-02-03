#include<iostream>
#include<memory>
using namespace std;
void fun(unique_ptr<int>ptr)
{
	*ptr=100;
	cout<<"resource modified in function"<<endl;
}
int main()
{
	unique_ptr<int>p=make_unique<int>(42);
	fun(move(p));
	if(!p)
		cout<<"owner ship transferred  p becomes null ptr"<<endl;
}

