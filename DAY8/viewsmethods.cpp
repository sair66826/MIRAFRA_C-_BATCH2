#include<iostream>
#include<vector>
#include<ranges>
#include<iterator>
#include<map>
using namespace std;
int main()
{
	vector<int>v={1,2,3,4,5,6,7};
	for(auto even:v|views::filter([](int x){ return x%2==0;}))
	{
		cout<<even<<" ";
	}
	cout<<endl;
	for(auto tran:v|views::transform([](int x){return x*10;}))
	{
		cout<<tran<<" ";
	}
	cout<<endl;
	for(auto first:v|views::take(4))
		cout<<first<<" ";
	cout<<endl;
	for(auto second:v|views::drop(4))
		cout<<second<<" ";
	cout<<endl;
	for(auto rev:v|views::reverse)
		cout<<rev<<" ";
	cout<<endl;
	map<int,string>m={{1,"one"},{2,"two"},{3,"three"}};
	for(auto key:m|views::keys)
	{
		cout<<key<<" ";
	}
	cout<<endl;
	for(auto value:m|views::values)
		cout<<value<<" ";
	cout<<endl;
}

