#include<iostream>
#include<vector>
using namespace std;
class A
{
	public:A()
	       {
		       cout<<"constrcutor"<<endl;
	       }
	       A(A&&obj)
	       {
		       cout<<"move constructor"<<endl;
	       }
};
int main()
{
	vector<A>v;
	for(int i=0;i<10;i++)
	{     v.push_back(A());
		cout<<i+1<<endl;
		cout<<"size"<<v.size()<<endl;
		cout<<"capacity"<<v.capacity()<<endl;
	}
}

