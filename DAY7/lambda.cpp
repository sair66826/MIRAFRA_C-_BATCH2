#include<iostream>
#include<exception>
using namespace std;
int main()
{
	int threshold=50;
	int offset=10;
	bool enableAlarm=true;
	auto checkValue=[=](int value) mutable noexcept
	{
		cout<<"threshold:"<<threshold<<endl;
		cout<<"offset:"<<offset<<endl;
		cout<<"enable Alarm:"<<enableAlarm<<endl;
                if(value>20)
		{ threshold=100;
			offset=20;
			enableAlarm=false;
			throw "error";
		}
	};
        try{
	checkValue(30);
	}
	catch (char *c)
	{
		cout<<c<<endl;
	}

//	checkValue(65);
}
