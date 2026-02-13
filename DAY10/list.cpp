//#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main()
{   list<int>l={7,8,9,10,11};
    l.push_front(13);
    l.push_back(14);
     auto it=find(l.begin(),l.end(),10);
      if(it!=l.end())
         l.insert(it,32);
       for( int n:l)
        cout<<n<<" ";

    
    return 0;
}

