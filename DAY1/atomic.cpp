#include<bits/stdc++.h>
using namespace std;
int c=0;
void incre()
{
	for(int i=0;i<1000;i++)
	{
		c--;
	}}
void dec()
{
	for(int i=0;i<1000;i++)
	{
		c++;
	}}
int main()
{
	thread t1(incre);
	thread t2(dec);
	t1.join();
	t2.join();
	cout<<c;
}
