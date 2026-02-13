#include<iostream>
using namespace std;
class weakptr;
struct ctrlblock
{
	int count;
	int wkcount;
	ctrlblock():count(1),wkcount(0){}
};
class sharedptr
{
        int* p;
        ctrlblock* ctrl;
        void release()
        {
                if(ctrl)
                {
                        --(ctrl->count);

                if(ctrl->count==0)
                {
                        delete p;
			if(ctrl->wkcount==0)
                            delete ctrl;
                }
                }
        }
	public:sharedptr():p(nullptr),ctrl(nullptr){}
               sharedptr(int *ptr)
               {
                       p=ptr;
                       ctrl=new ctrlblock();
               }
               sharedptr(const sharedptr&obj)
               {
                       p=obj.p;
                       ctrl=obj.ctrl;
                       if(ctrl)
			   (ctrl->count)++;
               }
               sharedptr& operator=(const sharedptr&obj)
               {
                       if(this!=&obj)
                       {
                               release();
                               p=obj.p;
                               ctrl=obj.ctrl;
                               if(ctrl)
				       (ctrl->count)++;
                       }
                       return *this;
               }
               sharedptr(sharedptr&&obj)  noexcept
               {
                       p=obj.p;
                       ctrl=obj.ctrl;
                       obj.p=nullptr;
                       obj.ctrl=nullptr;
               }
               sharedptr& operator=(sharedptr&&obj) noexcept
               {
                       if(this!=&obj)
                       {
                               release();
                               p=obj.p;
                               ctrl=obj.ctrl;
                               obj.p=nullptr;
                               obj.ctrl=nullptr;
                       }
                       return *this;
               }
               int usecount()
               {
                       if(ctrl)
			       return ctrl->count;
		       return 0;
               }

               ~sharedptr()
               {
                       release();
               }
 friend class weakptr;
};
class weakptr
{
	int *p;
	ctrlblock *ctrl;
	public:weakptr():p(nullptr),ctrl(nullptr){}
	       weakptr(const sharedptr& sh)
	       {   p=sh.p;
                   ctrl=sh.ctrl;
		   if(ctrl)
			   (ctrl->wkcount)++;
	       }
	       weakptr(const weakptr&wp)
	       {
		       p=wp.p;
		       ctrl=wp.ctrl;
		       if(ctrl)
		       {
			       (ctrl->wkcount)++;
		       }
	       }
	       weakptr(weakptr&&wp)
	       {
		       p=wp.p;
		       ctrl=wp.ctrl;
		       wp.p=nullptr;
		       wp.ctrl=nullptr;
	       }
	       sharedptr lock()
	       {
		       if(expired())
			return sharedptr();
		         sharedptr temp;
			 temp.p=p;
			 temp.ctrl=ctrl;
			 if(ctrl)
				 (ctrl->count)++;
			 return temp;
				      }
                bool expired()
		{
		   if(!ctrl&&ctrl->count==0)
		     return true;
		     return false;
		     }
};

int main()
{
	sharedptr shptr;
	weakptr wp;
}
