//#include <bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;
 template<typename T,size_t sz>
class queue
{    list<T>l;
     public: queue(){}
             void push(T val)
              {    if(l.size()==sz)
                    {   cout<<"queue is full"<<endl;
                     }
                   else
                     {
                       l.push_back(val);
                      }
                
                   
               }
              void pop()
              {
                 if(l.empty())
                 {
                  cout<<"queue is empty"<<endl;
                 }
                 else
                 {
                   l.pop_front();
                  }
               }
              T& qfront()
               {
                 if(l.empty())
                   {
                    cout<<"queue is empty"<<endl;
                   
                     }
                 return l.front();
                }
              T& qback()
	      {
                 if(l.empty())
                   cout<<"queue is empty"<<endl;
                   return l.back();
             
                }
             bool empty()
               {
                   if(l.empty())
                     {
                      return true;
                      }
                   return false;
               }
};
int main()
{ 
  queue<int,6>q;
   for(int i=0;i<6;i++)
    {
      q.push(i);
     }
    q.push(6);
    q.push(7);
   while(!q.empty())
     {
         int n=q.qfront();
          cout<<n<<" ";
         q.pop();
      }  
q.pop();
  for(int i=0;i<6;i++)
    {
      q.push(i);
     }
    q.push(6);
    q.push(7);
while(!q.empty())
     {
         int n=q.qfront();
          cout<<n<<" ";
         q.pop();
      }
q.pop();
    return 0;
}

