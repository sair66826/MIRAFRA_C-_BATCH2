#include<iostream>
using namespace std;

void motor()
{
	cout<<"motor on"<<endl;
}
void warning()
{
	cout<<"temperature high"<<endl;
}
void fan()
{
	cout<<"fan on"<<endl;
}
void fun(int t)
{      void (*fp)();
	if(t<20)
	{   fp=motor;
	}
	if(t>=20&&t<25)
	{
		fp=warning;
	}
	if(t>=25)
	   fp=fan;
	fp();
}

int main()
{      int t;
	cin>>t;
	fun(t);
}
