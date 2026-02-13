//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class list
{
     struct node
	{
	 int data;
	 node*prev;
	 node*next;
         node(int val=0):data(val),prev(nullptr),next(nullptr){}
	};
     node* head;
     node*last;
    public:  list()
             {
 	      last=head=nullptr;
              }
             list(int val)
             {
               last=head=new node(val);
             }
             list(const list&obj)
             {  auto temp=obj.head;
	       auto temp1=head=new node();
		while(temp)
		{  temp1->next=new node(temp->data);
		   temp1->next->prev=temp1;
		   temp1=temp1->next;
		   temp=temp->next;
		}
		temp=head;
		head=head->next;
		temp->next=nullptr;
		head->prev=nullptr;
		delete temp;
	     }


             void push_back(int val)
		{  node*newnode=new node(val);
		  if(!last)
		   head=last=newnode;
		   else
		   {
		     last->next=newnode;
                     newnode->prev=last;
		     last=newnode;
		  }
		}
	    void push_front(int val)
	    {
		    node*newnode=new node(val);
		    if(!head)
			    head=last=newnode;
		    else
		      {
			   newnode->next=head;
                           head->prev=newnode;
			   head=newnode;
		      }
	    }
	    node* begin()
	    {
		    return head;
	    }
	    node* end()
	    {
		    return last;
	    }
	    void pop_back()
	    {       if(!last)
	             return;
		    if(last==head)
		    {      
			    delete last;
			    last=head=nullptr;
		    }
		    else
	            {  
			    node*temp=last;
			    last=last->prev;
			    last->next=nullptr;
			    delete temp;
		    }
	    }
	    void pop_front()
	    {
		    if(!head)
			    return;
	            if(head==last)
		    {
			    delete head;
			    last=head=nullptr;
		    }
		    else
		    {
			    node*temp=head;
			    head=head->next;
			    head->prev=nullptr;
			    delete temp;
		    }
	    }
	    ~list()
	    {
		    node*temp=head;
		    while(temp)
		    {
			    node*next=temp->next;
			    delete temp;
			    temp=next;
		    }
	    }
};

void print( auto &l)
{
   auto it=l.begin();
     while(it)
      {
        cout<<it->data<<" ";
        it=it->next;
      }
    cout<<endl;
}		    		 
int main()
{
    list l;
    l.push_back(10);
    l.push_back(20);
    print(l);
    list l1(l);
    l.pop_back();
    l.pop_front();
    print(l);
    print(l1);

    return 0;
}

