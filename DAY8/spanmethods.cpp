#include<iostream>
#include<span>
#include<vector>
using namespace std;
void fun(span<int>s)
{
	for(auto it:s)
	   cout<<it<<" ";
	cout<<endl;
}
int main()
{
	vector<int>v={1,2,3,4};
	span<int>s(v);
	auto first_half=s.first(2);
	auto second_half=s.last(2);
	auto mid=s.subspan(1,3);
	fun(first_half);
	fun(second_half);
	fun(mid);
	cout<<s.at(4)<<endl;
}










