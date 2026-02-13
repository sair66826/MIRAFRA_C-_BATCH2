#include<iostream>
#include<functional>
using namespace std;
int main()
{
	function<int()>f;
	{
		int x=10;
		f=[&x]()
		{
			return x;
		};
	}
	cout<<f()<<endl;
}
