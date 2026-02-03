#include<iostream>
#include<memory>
using namespace std;
class test
{
	unique_ptr<int>uptr;
	public:test(int p):uptr(make_unique<int>(p)){cout<<"pin:"<<*uptr<<"initialized"<<endl;
	       }
	       void show()
	       {
		       cout<<"pin value:"<<*uptr<<endl;
	       }
};
int main()
{
	test obj(10);
	obj.show();
	test obj1(5);
	obj1.show();
//	test obj2=obj1;
	obj1=move(obj);
	obj1.show();
};
