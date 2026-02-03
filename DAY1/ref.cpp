/*#include<bits/stdc++.h>
using namespace std;
void fun(int &p)
{
	p++;
}
int main()
{       int n=11;
	fun(n);
	cout<<n<<endl;

}*/
/*#include<bits/stdc++.h>
using namespace std;
int & fun(int &p)
{
        p++;
	static int s=100;
	return s;
}
int main()
{       int n=11;
       int &rref=fun(n);
        cout<<n<<" "<<rref<<endl;

}*/
/*#include<bits/stdc++.h>
using namespace std;
int & fun(int &p)
{
        p++;
        static int s=100;
        return s;
}
void con(const int&q)
{
	int &m=q;
	m++;
	cout<<m<<endl;
}
int main()
{      int n=11;
        con(n);
       int &rref=fun(n);
        cout<<n<<" "<<rref<<endl;

}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{     vector<string>v={"hello","hi","hedds"};
	for(const auto&x:v)
        {
		cout<<x<<endl;
	}

}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{       int p=10;
	const int* n=&p;
       (*n)++;
cout<<p<<endl;       

}






