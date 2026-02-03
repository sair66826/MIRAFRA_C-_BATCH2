#include<bits/stdc++.h>
using namespace std;
class led
{   int status;
	public: 
		void ledon()
                 {
                    status=1;
		 }
		void ledtoggle()
		{
	           status=0;
		}
		void display()
		{
			if(status)
			  cout<<"ledon"<<endl;
			else
				cout<<"ledoff"<<endl;
		}
};
int main()
{
   led l1(1);
   l1.ledon();
   l1.ledtoggle();
}


