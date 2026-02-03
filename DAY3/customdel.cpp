#include<bits/stdc++.h>
using namespace std;
class test
{int stat;
	public: test(int n=0):stat(n)
		{}
			
		template<typename t>
		void operator()(t*p)
		{   if(stat)
			{
		      	if(p)
			{
			delete[]p;
			cout<<"custom deleter"<<endl;
			}
			}
		}
};
int main()
{
	unique_ptr<int[],test>p(new int[10],test(1));
}
