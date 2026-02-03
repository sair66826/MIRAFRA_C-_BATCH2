#include<bits/stdc++.h>
using namespace std;
class solution
{  int p;
   public:
	   solution(int x):p(x){}
	   solution(solution obj)
	   {
		   p=obj.p;
	   }
};
int main()
{
	solution obj(10);
	solution obj2(obj);
}

