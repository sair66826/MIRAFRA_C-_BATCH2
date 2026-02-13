#include<iostream>
#include<vector>
using namespace std;
class A
{   public:A()
	    {
		    cout<<"default constrcutor"<<endl;
	    }
	    A(A&&obj)
	    {
		    cout<<"move constructor"<<endl;
	    }
};
int main()
{
	vector<A>v;
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<" push"<<endl;
		v.push_back(A());
	}
}

