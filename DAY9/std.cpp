//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<array>
#include<list>
using namespace std;
  template<typename t>

void print_all(t bg,t ed)
{
   if(bg==ed)
      return;
   else
     {
       while(bg!=ed)
          {
            cout<<*bg<<" ";
            bg++;
          }
          cout<<endl;
       }
}
int main()
{
    vector<int>v={1,2,3,4,5,5,6};
    list<int>l={1,2,3,4,5,56,66};
    array<int,3>ar={1,2,3};
    cout<<"for vector"<<endl;
    print_all(v.begin(),v.end());
    cout<<"for list"<<endl;
    print_all(l.begin(),l.end());
    cout<<"for  array"<<endl;
    print_all(ar.begin(),ar.end());

    
    return 0;
}

