#include<bits/stdc++.h>
using namespace std;
void alterreso(int*p)
{
	*p=100;
	cout<<"val in function"<<*p<<endl;
	cout<<"address of ptr"<<p<<endl;
}
int main()
{
	unique_ptr<int>uptr=make_unique<int>(10);
	cout<<"uqptr befor func"<<*uptr<<endl;
	cout<<"uqptr add before fun"<<uptr.get()<<endl;
	  alterreso(uptr.get());
	  cout<<"uqptr after fun"<<*uptr<<endl;
	  cout<<"uptr addr after fun"<<uptr.get()<<endl;
	  if(!uptr.get())
		  cout<<"uptr transferred ownership"<<endl;
	  else
		  cout<<"uptr still owns the resource"<<endl;

}
