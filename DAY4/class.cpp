#include<iostream>
using namespace std;
class a
{
	int x;
	public :
	 a(){cout<<"defaultconstructor"<<endl;}
	a(int p):x(p){cout<<"in constructor"<<p<<endl;}
};
int main()
{
	a obj();
}
