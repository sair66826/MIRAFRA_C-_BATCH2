//#include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{     unordered_map<int,int>un;
      un[0]=5;
      un[1]=3;
      for(const auto&[key,val]:un)
        cout<<key<<"->"<<val<<endl;

    
    return 0;
}

