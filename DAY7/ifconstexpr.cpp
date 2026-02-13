#include<iostream>
using namespace std;
template<typename t>
void process(t value)
{
	if constexpr(sizeof(value)==4)
	    cout<<"32 bit type"<<endl;
	else
		cout<<"non 32 bit type"<<endl;
}
int main()
{
	process(10);
	process(2.5);
	process('a');
}
