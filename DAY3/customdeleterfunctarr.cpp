#include<bits/stdc++.h>
using namespace std;
class test
{
	public:
		template<typename t>
		void operator()(t*p)
		{
			delete[]p;
			cout<<"deleted array of dynamically allocated memory"<<endl;
		}
};
int main()
{
	unique_ptr<int[],test>p(new int[10]);
}
