#include<iostream>
#include<memory>
using namespace std;
struct a
{
	int x;
	a()
	{
		cout<<"default constructor"<<endl;
	}
	a(int p):x(p){cout<<"parameterized constructor"<<endl;
	}
};
int main()
{
    a obj{};

}
