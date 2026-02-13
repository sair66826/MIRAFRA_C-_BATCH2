//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
class sparse
{
   vector<pair<int,int>>data;
   public: void set(int ind,int val)
          {
               if(val!=0)
                {
                    data.push_back({ind,val});
                 }
           }
           int get(int index)
            {
                  for(const auto&[i,v]:data)
                    {
                       if(i==index)
                           return  v;
                     }
                    return 0;
              }
           void print()
            {
               for(const auto&[i,v]:data)
                    cout<<i<<"->"<<v<<endl;
               }
};                  
int main()
{
    int a[10]={0,0,0,2,0,3,0,0,3,0};
       sparse s;
     for(int i=0;i<10;i++)
      {     s.set(i,a[i]);
       }
      s.print();
           
    return 0;
}

