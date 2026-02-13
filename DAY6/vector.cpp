#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v(5,0);
	cout<<"vector size before pushing"<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
         for(auto i:v)
	 {
		 cin>>v[i];
	 }
	 v.push_back(10);
	 cout<<"vector size after pushing"<<endl;
	 cout<<v.size()<<endl;
	 cout<<v.capacity()<<endl;
	 v.push_back(11);
         cout<<"vector size after pushing"<<endl;
         cout<<v.size()<<endl;
	 cout<<v.capacity()<<endl;
}
