#include<iostream>
#include<ranges>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v={8,5,3,6,22,55,2,4};
	ranges::sort(v);
	for(auto it:v)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	auto it=ranges::find(v,4);
	if(it!=v.end())
	{
		cout<<"4 found at"<<(it-v.begin())<<endl;
	}

}
