#include<iostream>
#include<memory>
using namespace std;
/*int main()
{
	shared_ptr<int>spt1=make_shared<int>(30);
	cout<<"shared ptrcount"<<spt1.use_count()<<endl;
	{
		shared_ptr<int>spt2=spt1;
		shared_ptr<int>spt3=spt2;
		cout<<"shared ptr count in block"<<spt1.use_count()<<endl;
	}
	cout<<"shared ptr count outside block"<<spt1.use_count()<<endl;
}*/
class shared
{
	int x;



