//#include <bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int c=1;
class process
{
  int pid;
  string pname;
  bool rstatus;
  public: process(string name,bool status):pid(c++),pname(name),rstatus(status)
          {  }
          void print()
           {
             cout<<"pid :"<<pid<<endl;
             cout<<"pname:"<<pname<<endl;
             if(rstatus)
             cout<<"rstatus:running"<<endl;
             else
              cout<<"rstatus:stop"<<endl;
           }
          friend  ostream&operator<<(ostream&os,const process&obj)
                 {
                    os<<"pid:"<<obj.pid<<endl;
                    os<<"pname:"<<obj.pname<<endl;
                    if(obj.rstatus)
                    os<<"rstatus: running"<<endl;
                    else
                     os<<"rstatus:stop"<<endl;
                    return os;
                  }
};

            
int main()
{
     stack<process>s;
     s.push(process("process1",true));
     s.push(process("process2",true));  
     s.push(process("process3",false));
     while(!s.empty())
     {  cout<<s.top()<<endl;
        s.pop();
     }
        
       
    return 0;
}

