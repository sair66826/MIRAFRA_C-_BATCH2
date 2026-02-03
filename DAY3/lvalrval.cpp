#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=1,b=2;
       // int &c=a+b;  x
       //const int& c=a+b; //works but not modifiable
       int&& c=a+b;// works but modifiable
	cout<<c<<":"<<sizeof(c)<<":"<<&c<<endl;
}
