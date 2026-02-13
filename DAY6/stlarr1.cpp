#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
void fun(array<int,10>&ar)
{
	for(int i=0;i<ar.size();i++)
	{
		ar[i]=ar[i]+i;
	}
}
int main()
{
	array<int,10>a{1};
	for(auto i:a)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	fun(a);

       for(auto i:a)
       {
	       cout<<i<<" ";
       }
}
