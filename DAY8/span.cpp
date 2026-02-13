#include<iostream>
#include<span>
#include<vector>
using namespace std;
void print(span<int>s)
{
	for(auto it:s)
	{       
		cout<<it<<" ";
	}
	s[5]=6;
	cout<<s[5];
	cout<<endl;
}
int main()
{
	vector<int>v={1,2,3,4};
	cout<<v.size()<<endl;
	print(v);
	for(auto it:v)
	{
		cout<<it<<" ";
	}
	cout<<v[5]<<endl;
	int arr[]={10,20,30};
//	cout<<arr.size()<<endl;
	print(arr);
	for(auto it:arr)
        {
                cout<<it<<" ";
        }
        cout<<arr[5]<<endl;
}

