#include<iostream>
using namespace std;
class myvector
{
	int *data;
	size_t sz;
	size_t cap;
	void grow()
	{
		cap=(cap==0)?1:(cap*2);
		int *newdata=new int[cap];
		for(int i=0;i<sz;i++)
		{
			newdata[i]=data[i];
		}
		delete []data;
		data=newdata;
	}

	public:myvector(size_t size=0,int n=0):sz(size),cap(size),data(nullptr){
	              data=(cap>0)?new int[cap]:nullptr;
		       for(int i=0;i<sz;i++)
		     {   data[i]=n;
		     }	  
	       }
	       myvector(const myvector&obj)
	       {sz=obj.sz;
		cap=obj.cap;
		data=(cap>0)?new int[cap]:nullptr;
		for(int i=0;i<sz;i++)
                {  data[i]=obj.data[i];
		}
	       }
	       myvector(myvector&&obj)
	       {
		       sz=obj.sz;
		       cap=obj.cap;
		       data=(cap>0)?obj.data:nullptr;
		       obj.sz=0;
		       obj.cap=0;
		       obj.data=nullptr;
	       }
	       myvector& operator=(const myvector&obj)
	       {
		       if(this!=&obj)
		       {sz=obj.sz;
                        cap=obj.cap;
			delete[]data;
                        data=(cap>0)?new int[cap]:nullptr;
                       for(int i=0;i<sz;i++)
                         {  data[i]=obj.data[i];
                           }
		       }
		       return *this;
	       }
	       myvector& operator=(myvector&&obj)
	       {
		       if(this!=&obj)
		       {
			       sz=obj.sz;
			       cap=obj.cap;
			       delete []data;
			       data=obj.data;
			       obj.sz=0;
			       obj.cap=0;
			       obj.data=nullptr;
		       }
		       return *this;
	       }


	       ~myvector()
	       {delete[] data;
	       }
	       int& operator[](int i)
	       {       
		       return data[i];
	       }
	       int& at(int i)
	       {
		       if(i>=sz)
			        throw out_of_range("int_Array:at");
		       return data[i];
	       }
	       void push_back(int n)
	       {
		       if(sz==cap)
			  grow();
		       data[(sz++)]=n;
	       }
	       size_t size()
	       { return sz;
	       }
	       size_t capacity()
	       {return cap;}
	       void pop_back()
	       {
		       data[sz-1]=0;
		       sz--;
	       }
	       void reserve(int size)
	       {
		       if(size<=cap)
			       return;
		       cap=size;
		       int *newdata=new int[cap];
		       for(int i=0;i<sz;i++)
		       {
			       newdata[i]=data[i];
		       }
		       delete []data;
		       data=newdata;
	       }
	       int* rbegin()
	       {return data+sz-1;
	       }
	       int* rend()
	       {
		       return data-1;
	       }



};



int main()
{
  /* myvector v(2,0);
   cout<<"before pushing "<<endl;
   cout<<"size of vector"<<v.size()<<endl;
   cout<<"capacity of vector"<<v.capacity()<<endl;
   v.push_back(10);
   cout<<"after pushing"<<endl;
   cout<<"size of vector"<<v.size()<<endl;
   cout<<"capacity of vector"<<v.capacity()<<endl;
   v.push_back(10);
   cout<<"after pushing"<<endl;
   cout<<"size of vector"<<v.size()<<endl;
   cout<<"capacity of vector"<<v.capacity()<<endl;
   v.push_back(10);
   cout<<"after pushing"<<endl;
   cout<<"size of vector"<<v.size()<<endl;
   cout<<"capacity of vector"<<v.capacity()<<endl;
   v.push_back(10);
   cout<<"after pushing"<<endl;
   cout<<"size of vector"<<v.size()<<endl;
   cout<<"capacity of vector"<<v.capacity()<<endl;*/
   myvector v;
   v.push_back(2);
   myvector v2=v;
   for(int i=0;i<v2.size();i++)
	  {
		  cout<<v2[i]<<" ";
	  }
   
  myvector v3=move(v2);
   cout<<v2[0]<<endl;

}
