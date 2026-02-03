#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
//template<typename t>
class delet
{ public:
 void operator()(int *p)
{
	free(p);
	p=nullptr;
	cout<<"malloced memory freed using custom deleter"<<endl;
}
};


int main()
{
	 unique_ptr<int,delet>p{(int*)malloc(sizeof(int))};
}

