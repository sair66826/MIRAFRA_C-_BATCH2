#include<iostream>
#include<ranges>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v={1,2,3,4,5,6};
	auto even=v|views::filter([](int x){
			     return x%2==0;
			     });
	for( auto it:even)
		cout<<it<<" ";
	cout<<endl;
	auto square=v|views::transform([](int x)
			{
			 return x*x;
			 });
	for(auto it:square)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}

