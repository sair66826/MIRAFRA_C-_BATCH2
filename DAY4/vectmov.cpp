#include<bits/stdc++.h>
using namespace std;
class gpio
{
	int pin;
	public:gpio(int n):pin(n){cout<<"constructor for"<<pin<<endl;}
	       gpio(const gpio&obj):pin(obj.pin){cout<<"copy for"<<pin<<endl;}
	       gpio(gpio&&obj) noexcept:pin(obj.pin){obj.pin=-1;cout<<"move for"<<pin<<endl;}
	       ~gpio(){cout<<"destructor for"<<pin<<endl;
	       }
};
int main()
{
	vector<gpio>v;
	v.push_back(gpio(1));
	v.push_back(gpio(0));
}
