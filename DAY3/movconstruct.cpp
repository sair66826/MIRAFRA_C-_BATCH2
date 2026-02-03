#include<iostream>
using namespace std;
class A
{
	int p;
	public:
        	A(int n):p(n)
		{
		}
		A ( A&obj):p(obj.p){cout<<"in copy"<<endl;}
		A(A&&obj)=delete;
};
	       
int main()
{   A a(10);
    A b=a;
    A c=move(a);

}
