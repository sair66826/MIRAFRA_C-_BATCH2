#include<bits/stdc++.h>
using namespace std;
class solution
{
        int *p;
        public:solution(int n)
               {
                       p=new int(n);
               }
               solution(const solution&obj)
               {    cout<<"in copy"<<endl;
                       p=new int(*obj.p);
               }
              solution(solution&&obj)
               {   cout<<"in move"<<endl;
                       p=obj.p;
                       obj.p=nullptr;
               }
	      solution& operator=(solution&&obj)
	      {
		      cout<<"in move assign"<<endl;
		      if(this!=&obj)
		      {      if(p)
			      {
			      delete p;
			      p=obj.p;
			      obj.p=nullptr;
			      }
		      }
		      return *this;
	      }

};
solution create(int n)
{
        solution ob1(n);
        return ob1;
}
int main()
{
        solution obj=create(4);
	solution obj1(5);
	obj1=move(obj);

}



