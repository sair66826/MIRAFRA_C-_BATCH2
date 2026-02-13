#include<iostream>
using namespace std;
constexpr int fact(int n)
{       
	int res=1;
//	cin>>res;//error because cin works at run time the function is declared to work at compiletime
	for(int i=1;i<=n;i++)
	{ res*=i;
	}
	return res;
}

int main()
{
	constexpr int ftrl=fact(5);
	  int n=7;
          int ftrl2=fact(n);
	  cout<<ftrl<<endl;
	  cout<<ftrl2;
}

