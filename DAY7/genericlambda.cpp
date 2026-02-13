#include<iostream>
#include<functional>
#include<vector>
using namespace std;
// generic lambda c++14
/*int main()
{
	int t=5;
	auto genericlamb=[=](auto x,auto y)
	{
		return (x+y+t);
	};
	cout<<genericlamb(1,2)<<endl;
	cout<<genericlamb(2.5,3.6)<<endl;
}
*/
/*
int main()
{
	int  t=5;
	function<auto(auto,auto)>f=[=](auto x,auto y)->auto//throws you error because we cannot use auto with function class
	{
		return(x+y+t);
	};
	cout<<f(1,2)<<endl;
	cout<<f(2.3,4.5)<<endl;
}*/

int main()
{
	vector<int>v={1,2,3};
	for_each(v.begin(),v.end(),[](int x){
			cout<<x<<" ";});
}

