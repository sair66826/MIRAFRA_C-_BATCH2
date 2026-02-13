#include<iostream>
#include<span>
using namespace std;
void fun(span<int>s)
{
	for(int &v:s)
		v=v*2;
	for(int v:s)
		cout<<v<<" ";
	cout<<endl;
}
int main()
{
	int *p=new int[5]{1,2,3,4,5};
	span<int>s(p,5);
	fun(s);
	for( int i=0;i<5;i++)
	{   cout<<p[i]<<" ";
	}
	cout<<endl;

}
