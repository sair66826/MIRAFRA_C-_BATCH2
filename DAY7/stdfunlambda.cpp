#include<iostream>
#include<functional>
using namespace std;
int main()
{
	int fact=7;
	function<int(int,int)>f=[=](int x,int y)->int
	{
		return (x+y+fact);
	};
	cout<<f(5,6);
}
