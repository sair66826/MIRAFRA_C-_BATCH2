#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
template<typename t>
void delet(t *p)
{
	free(p);
	p=nullptr;
	cout<<"malloced memory freed using custom deleter"<<endl;
}


int main()
{
	 unique_ptr<int,void(*)(int *)>p{(int*)malloc(sizeof(int)),delet};
}

