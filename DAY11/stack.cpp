//#include <bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;
template<typename T,size_t sz>
class stack
{
  array<T,sz>a;
    int  tp;
  public:
         stack():tp(-1)
         {}
         void push(T val)
         {   if(tp==sz)
              {
                 cout<<"stack full"<<endl;

               }
             else
               {
                 a[++tp]=val;
               }
          }
         void pop()
          {
            if(tp==-1)
              {
                cout<<"stack empty"<<endl;
              }
             else
               {
                 tp--;
               }
           }
         bool empty()
          {
            if(tp==-1)
               return true;
            else
               return false;
           }
        int size()
          {
             return tp+1;
          }
        T top()
          { 
               return a[tp];
         }
             
         
}; 
            
int main()
{
  stack<int,5>s;
  s.push(1);
  s.push(2);
  while(!s.empty())
   {
     int n=s.top();
      cout<<n<<" ";
      s.pop();
   }
  cout<<endl;
  cout<<s.size()<<endl;
    
    return 0;
}

