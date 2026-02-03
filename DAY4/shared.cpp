#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct controlblock
{
	T *p;
	int strongcount;
	controlblock(T *res=nullptr):p(res),strongcount(1){}
};
template<typename T>
class sharedptr
{
	controlblock<T> *ctrl;
	void release()
	{
		if(!ctrl)
			return;
		--(ctrl->strongcount);
		if(ctrl->strongcount==0)
		{
			delete ctrl->p;
			ctrl->p=nullptr;
			delete ctrl;
		}
		ctrl=nullptr;
	} 
	public:
	   sharedptr(T*p=nullptr)
	   {
		   if(p)
		   {
			   ctrl=new controlblock<T>(p);
		   }
	   }
	   sharedptr(const sharedptr<T>&other)
	   {
		   ctrl=other.ctrl;
		   if(ctrl)
		   (ctrl->strongcount)++;
	   }
   sharedptr<T>& operator=(const sharedptr<T>&other)
	   {
		   if(this!=other)
		   {
			   release();
			   ctrl=other.ctrl;
			   if(ctrl)
				   (ctrl->strongcount)++;
		   }
		   return *this;
	   }
	   sharedptr(sharedptr<T>&&other)
	   {
		   ctrl=other.ctrl;
		   other.ctrl=nullptr;
	   }
	   sharedptr<T>& operator=(sharedptr<T>&&other)
	   {
		   if(this!=other)
		   { release();
	             ctrl=other.ctrl;
		     other.ctrl=nullptr;
		   }
		   return *this;
	   }
          T* get()
          {
		 return ctrl->p;
	  }
	  T& operator*()
           {
		    return *(ctrl->p);
	   }
          T* operator->()
	  {
		  return ctrl->p;
	  }
	  int usecount()
	  {
		  return ctrl->strongcount;
	  }
};
int main()
{
    sharedptr<int>shptr(new int(10));
    sharedptr<int>shptr2=shptr;
    cout<<"sharedptrcount:"<<shptr.usecount()<<endl;
    cout<<"shptr2:"<<*shptr2<<endl;
}

       

