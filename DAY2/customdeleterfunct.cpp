#include<bits/stdc++.h>
using namespace std;
class filedelet
{  
	public:
		void operator()(FILE *fp)
		{   
			cout<<"invoking custom deleter"<<endl;
			fclose(fp);
		}
};
int main()
{
	unique_ptr<FILE,filedelet>fptr(fopen("file.txt","w"));
}

