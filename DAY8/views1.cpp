#include<iostream>
#include<vector>
#include<ranges>
#include<iterator>
using namespace std;

int main()
{
	vector<int>v={22,25,67,84,23};
	auto temp=v|views::filter([](int x)
			{      if(x<=25&&x>20)
			       return x;
			       return 0;
			       }); 
          for(auto it:temp)
	  {
	    cout<<it<<" ";
	    }
	    cout<<endl;
}
