#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{  
       	array<int,6>a;
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	cout<<a[5]<<endl;
	sort(a.begin(),a.end());
//	cout<<a.at(6)<<endl;
        
	for(auto i:a)
	{
		cout<<i<<" ";
	}
}

