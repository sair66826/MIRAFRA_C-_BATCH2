#include<bits/stdc++.h>
using namespace std;
class rule5
{
	int n;
	char *ch;
	int *p;
	string str;
     public:rule5(int num,const char* chr=nullptr,int *ptr=nullptr,string s=""):n(num),p(ptr){str=s;if(chr){ch=new char[strlen(chr)+1];strcpy(ch,chr);}}
	    rule5(const rule5&obj)
	    {
		    n=obj.n;
		    ch=nullptr;
		    if(obj.ch)
		    {
		    ch=new char[strlen(obj.ch)+1];
		    strcpy(ch,obj.ch);
		    }
		    p=nullptr;
		    if(obj.p)
		         p=new int(*obj.p);
		    str=obj.str;
	    }
	    rule5& operator=(const rule5&obj)
	    {
		    if(this!=&obj)
		    {
			    n=obj.n;
			    str=obj.str;
				delete[]ch;
				delete p;
				ch=nullptr;
				p=nullptr;
				if(obj.ch){
				ch=new char[strlen(obj.ch)+1];
				strcpy(ch,obj.ch);}
			    if(obj.p)
				    p=new int(*obj.p);
		    }
		    return *this;
	    }
	    rule5(rule5&&obj)
	    {
		    n=obj.n;
		    obj.n=0;
			    ch=obj.ch;
			    obj.ch=nullptr;
			    p=obj.p;
		            obj.p=nullptr;
		    str=obj.str;
		    obj.str="";
	    }
	    rule5&operator=(rule5&&obj)
	    {
		    if(this!=&obj)
		     {
			
				     delete[]ch;
				     ch=obj.ch;
				     obj.ch=nullptr;
				     delete p;
			             p=obj.p;
				     obj.p=nullptr;
			n=obj.n;
			obj.n=0;
			str=obj.str;
			obj.str="";
		     }
		    return *this;
	    }
	    void display()
	    {}
	    ~rule5()
	    {
		    delete[]ch;
		    delete p;
	    }
};
int main()
{
	rule5 obj(1,"hello",new int(5),"hi");
}
