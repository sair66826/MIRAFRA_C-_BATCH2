//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
consteval int square(int x)
{
  return x*x;
}
int main()
{    int a=square(5);
    cout<<"a="<<a<<endl;
    const int b=10;
    constexpr int c=square(b);
    cout<<"c="<<c<<endl;
    
    return 0;
}

