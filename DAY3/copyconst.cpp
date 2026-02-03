#include<bits/stdc++.h>
using namespace std;
class test
{
	int *p;
	public:test(int n=0) 
	       {  
                 p=new int(n);
	       }
	       test(const test&other)
	       {
		       p=new int(*other.p);
	       }
	       test& operator=(const test&other)
	       {
		       if(this!=&other)
		       {
			      delete p;
			      p=new int(*other.p);
		       }
		       return *this;
	       }
	       void display()
	       {
		       cout<<*p<<endl;
	       }
	       ~test()
	       {
		       delete p;
	       }
};
int main()
{
	test t(10);
	cout<<"obj1:"<<endl;
	t.display();
	test t1(100);
	cout<<"obj2:"<<endl;
	t1.display();
	cout<<"copying obj2 into obj3 :"<<endl;
	test t2=t1;
	cout<<"obj3:"<<endl;
	t2.display();
        cout<<"copying obj1 into obj3:"<<endl;

	t2=t;
	cout<<"obj3:"<<endl;
	t2.display();

}

			      

