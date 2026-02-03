#include<bits/stdc++.h>
using namespace std;
int g=0;
int g1;
void fun()
{
	int stack;
	cout<<"stack:"<<&stack<<endl;
}

int main()
   {    static  int s=1 ;
	static int s1;
	int *heap=new int(50);
cout<<"initailized data glob:"<<&g<<endl;
	cout<<"unintialized data gloa:"<<&g1<<endl;
	cout<<"initial stat:"<<&s<<endl;
	cout<<"unintialized:"<<&s1<<endl;
	cout<<"heap:"<<heap<<endl;
}	

