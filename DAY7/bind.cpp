#include<iostream>
#include<functional>
using namespace std;
int sum(int x,int y,int z)
{
	return (x+y+z);
}
int main()
{
	auto bindfun=bind(sum,10,placeholders::_1,placeholders::_2);
	cout<<bindfun(5,6);
}

