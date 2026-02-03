#include<bits/stdc++.h>
using namespace std;
class elison
{
	public:elison(){cout<<"constrcuto"<<endl;}
	       elison(const elison&obj){cout<<"copy"<<endl;}
	       elison(elison&&obj){cout<<"move"<<endl;}
	       ~elison(){cout<<"dest"<<endl;
	       }
};
elison create()
{
	elison e;
	return e;
}
int main()
{
	elison b=create();
}

