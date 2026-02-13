//#include <bits/stdc++.h>
#include<iostream>
#include<map>

using namespace std;

int main()
{
     map<int,string>m={{1,"one"},{2,"two"},{3,"three"},{4,"four"}};
     for( const auto&[key,val]:m)
        cout<<key<<"->"<<val<<endl;
      for(auto el:m)
      {
          int key=el.first;
           string val=el.second;
          cout<<key<<"->"<<val<<endl;
      } 
    
    return 0;

}

