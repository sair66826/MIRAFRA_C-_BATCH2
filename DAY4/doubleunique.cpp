#include<iostream>
#include<memory>
using namespace std;
void fun(unique_ptr<int>*ptr)
{   *ptr=make_unique<int>(300);
     cout<<"double ptr"<<ptr<<endl;
     cout<<"double ptr"<<(*ptr).get()<<endl;

   }
int main()
{
	unique_ptr<int>p=make_unique<int>(20);
	cout<<"uptr address"<<&p<<endl;
	cout<<"uptr resource"<<p.get()<<endl;
	fun(&p);
	if(!p)
		cout<<"resource deallocated"<<endl;
}


