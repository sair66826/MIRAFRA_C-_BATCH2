//#include <bits/stdc++.h>
#include<iostream>
#include<stdio_ext.h>
using namespace std;
int* createsensor()
{
   int *p=new int[4];
    for(int i=0;i<4;i++)
 	{
 	     cin>>p[i];
     	}
	return p;
}
int c=0;
void print(int**p)
{
  for(int i=0;i<c;i++)
    {
      for(int j=0;j<4;j++)
       {
           cout<<p[i][j]<<" ";
       }
       cout<<endl;
    }
}

int main()
{   int **p=nullptr;
    int ch;
  label1: cout<<"enter 1 to enter new sensor data or 0 to exit"<<endl;
   __fpurge(stdin);
    cin>>ch;
    if(ch==1)
    {
         if(c==0)
          {
        	p=new int*[1];
                p[0]=createsensor();
                c++;
           }
          else
             {
                 int**q=new int*[c+1];
                 int i=0;
               for(i=0;i<c;i++)
                {
                   q[i]=p[i];
                   p[i]=nullptr;
                   // delete []p[i];
                }
                q[i]=createsensor();
                
                delete[]p;
                p=q;
               c++;
              }
           goto label1;
      }
     else if(ch!=0)
     {
       cout<<"invalid input "<<endl;
       goto label1;
      }
    print(p);
     return 0;
}
     
       	
