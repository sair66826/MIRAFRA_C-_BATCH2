//#include <bits/stdc++.h>
#include<iostream>
#include<memory>
using namespace std;
struct node
{
	int data;
	unique_ptr<node>link;
	node(int dat):data(dat),link(nullptr){}
};

class linkedlist
{     unique_ptr<node>head;
	public: 
		linkedlist()
		{
			head=nullptr;
		}
		linkedlist(int dat)
		{
			head=make_unique<node>(dat);
		}
		linkedlist(const linkedlist&obj)
		{
			if(!obj.head)return;
			node*temp=obj.head.get();
                        head=make_unique<node>(0);
                        node*temp1=head.get();
			while(temp)
			{
				temp1->link=make_unique<node>(temp->data);
				temp1=temp1->link.get();
				temp=temp->link.get();
			}
			head=move(head->link);
		}

		void addnode(int dat)
		{     unique_ptr<node>newnode=make_unique<node>(dat);
			if(!head)
			{
				head=move(newnode);
			}
			else
			{
				node *temp=head.get();
				while(temp->link)
				{
					temp=temp->link.get();
				}
				temp->link=move(newnode);
			}
		}
		void print()
		{   
			node* temp=head.get();
			while(temp)
			{
				cout<<temp->data<<" ";
				temp=temp->link.get();
			}
		}
		void push_front(int dat)
		{
			//node *temp=head;
			unique_ptr<node>newnode=make_unique<node>(dat);
			newnode->link=move(head);
			head=move(newnode);
		}


		~linkedlist()
		{
	           cout<<"destrcutor"<<endl;
		}


};

int main()
{    linkedlist l;
	l.addnode(1);
	l.addnode(2);
	l.print();
	l.addnode(3);
	l.print();
	l.push_front(0);
	cout<<endl;    
	l.print();

	linkedlist l1=l;
	l1.print();

	return 0;
}

