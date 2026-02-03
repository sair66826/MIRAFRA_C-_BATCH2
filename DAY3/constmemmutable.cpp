#include<bits/stdc++.h>
using namespace std;
class sensor
{
	int value;
	//mutable int rdcount;
	int rdcount;
	public:
	sensor(int v):value(v),rdcount(0)
	{}
	int read()const
	{
		rdcount++;
		return value;
	}
	int getrdct()
	{
		return rdcount;
	}
};
int main()
{
	sensor s(100);
	cout<<s.read()<<endl;
	cout<<s.read()<<endl;
	cout<<s.getrdct()<<endl;
}
