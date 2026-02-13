#include<iostream>
#include<vector>
using namespace std;
int main()
{       vector<vector<int>>v(5,vector<int>(5,0));
	v[2][2]=3;
	v[0][4]=2;
	v[4][0]=4;
	vector<pair<pair<int,int>,int>>sparse;
        for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(v[i][j]!=0)
				sparse.push_back(i,j,v[i][j]);
		}
	}
	for(auto it:sparse)
	{
		auto i=it.first.first;
		auto j=it.first.second;
		auto val=it.second;
		cout<<i<<" "<<j<<" "<<val<<endl;
	}
}
