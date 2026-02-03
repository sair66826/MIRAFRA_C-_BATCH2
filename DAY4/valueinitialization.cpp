#include<iostream>
#include<memory>
using namespace std;
class gpio
{
	int pin;
	public:gpio(int p):pin(p){cout<<"pin"<<p<<"initialized"<<endl;}
};
struct a
{
	int x;
	a(){
		cout<<"default constructor"<<endl;
	}
          
	a(int p)
	{
		x=p;
		cout<<"in constrcutor"<<x<<endl;
	}
	void operator()(gpio *ptr)
	{
		delete ptr;
		cout<<"custom deleter"<<endl;
	}
};
int main()
{
	 unique_ptr<gpio,a>uptr(new gpio(10),a{});
}
