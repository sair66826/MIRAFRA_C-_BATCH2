//#include <bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;
template<typename T,size_t sz>
class queue
{  list<T>l;
  int frontend;
  int rear;
  public:queue():frontend(0),rear(0){}
         void push(T val)
         {
           if(rear==sz)
           {
             cout<<"queue full"<<endl;
            
           }
          else
            {
              l.push_back(val);
               rear++;
            }
          }
         void pop()
           {
                if(rear==frontend)
                 {
                   cout<<"queue is empty"<<endl;
                   frontend=rear=0;
                 }
                else
                 {   l.pop_front();
                    frontend++;
                  }
           }
         T& front()
          {
             if(rear==frontend)
              {  cout<<"queue is empty"<<endl;
                  }
                return l.front();
          }
         T& back()
          {
             if(rear==frontend)
              {
                cout<<"queue is empty"<<endl;
               }
             return l.back();
          }
         bool empty()
            {
              if(rear==frontend)
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
         int n=q.front();
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
         int n=q.front();
          cout<<n<<" ";
         q.pop();
      }
q.pop();
    return 0;

}

