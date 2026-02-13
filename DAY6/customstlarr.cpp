#include<iostream>
using namespace std;
template<int n>
class myarray
{
	public: int data[n];
		int size()
		{
			return n;
		}
	       const int at(int i) const
		{
			if(i>=n)
				throw out_of_range("int_Array::at");
			return data[i];
		}
	       int& operator[](int i) 
		{
			return data[i];
		}
		int* begin()
		{
			return data;
		}
		int* end()
		{
			return data+n;
		}
		int* data1()
		{
			return data;
		}

};
int main()
{
	myarray<5>ar;
	for(int i=0;i<ar.size();i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<ar[i];
	}
	cout<<ar.at(2)<<endl;
	cout<<*ar.begin()<<endl;
	cout<<*(ar.end()-1)<<endl;
	cout<<*ar.data1()<<endl;

}

