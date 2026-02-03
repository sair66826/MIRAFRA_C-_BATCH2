#include<bits/stdc++.h>
using namespace std;
class test
{   int st;
	public:test(int stat):st(stat){}
	       void operator()()
	       {
		       if(st)
			       cout<<"on"<<endl;
		       else 
			       cout<<"off"<<endl;
	       }
	       void operator()(string str)
	       {    if(st&&str=="on")
		       cout<<"led already turned on"<<endl;
		     if(!st&&str=="on")
		     {  st=1;
			 cout<<"led turned on"<<endl;
		     }
		     if(!st&&str=="of")
			     cout<<"led already turned of"<<endl;
		     if(st&&str=="of")
		     {
			     st=0;
			     cout<<"led turned off"<<endl;
		     }
	       }

};
int main()
{
	test led1(1);
	test led2(0);
	cout<<"led1 is ";
        led1();
	cout<<"led2 is ";
	led2();
	string str;
	cout<<"enter on or off for the led 1"<<endl;
	cin>>str;
	led1(str);
	cout<<"enter on or of for led 2"<<endl;
	cin>>str;
	led2(str);
}

