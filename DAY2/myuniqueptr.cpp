
#include<bits/stdc++.h>
using namespace std;
template<class T>
class myuniqueptr
{
   T *p;
	public:  myuniqueptr(T* ptr):p(ptr){}
		~myuniqueptr(){delete p;}
		 myuniqueptr(const myuniqueptr&obj)=delete;
		 myuniqueptr& operator=(const myuniqueptr&obj)=delete;
		 myuniqueptr(myuniqueptr&&obj)
		 {
			 p=obj.p;
			 obj.p=NULL;
		 }
		 myuniqueptr&operator=(myuniqueptr&&obj)
		 {
			 if(this!=&obj)
			 {
			    delete p;
			    p=obj.p;
			    obj.p=NULL;
			 }
			 return *this;
		 }
                 T* operator->(){return p;}
		 T& operator*(){return *p;}
		 T* get(){return p;}
};
int main()
{
	myuniqueptr<int>obj(new int(10));
	cout<<*obj<<endl;

}


