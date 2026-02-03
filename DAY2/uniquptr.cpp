#include<bits/stdc++.h>
using namespace std;
class test
{
   int n;
	public:test(int num):n(num)
	       {
		       cout<<"test constructor"<<endl;
	       }
	       ~test()
	       {
		       cout<<"test destructor"<<endl;
	       }
	       void display()
	        {
			  cout<<"the data member of test class n:"<<n<<endl;
		}
	       void update()
	       {
                  n=30;
	       }

};
int main()
{
	unique_ptr<test>p=make_unique<test>(10);
	unique_ptr<test>p1=make_unique<test>(20);
	p->display();
	p1->display();
	cout<<"moving ownership from p to p3"<<endl;
	unique_ptr<test>p2=move(p);
	if(!p)
	{
	     cout<<"p released the resource"<<endl;
	}
	p1->display();
	p2->display();
	test *t=p2.get();
	t->update();
//	delete t;
	p2->display();

}


