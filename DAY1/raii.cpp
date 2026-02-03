#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
class file
{   int fd;
	public:file(const char *path)
	       {
		       fd=open(path,O_WRONLY|O_CREAT);
		       cout<<fd<<endl;
	       }
	       void writefd(const char *str)
	       {
		       write(fd,str,strlen(str));
	       }
	       ~file()
	       {
		       if(fd>=0)
		       {
			       close(fd);
		       }
		       cout<<"work completed:"<<endl;
	       }
};
int main()
{
	file f("exp.cpp");
	file f2("exp1.cpp");
	f.writefd("in exp.cpp");
	f2.writefd("in exp1.cpp");
	cout<<"doing some work"<<endl;
	write(0,"writing into the exp.cpp",strlen("writing into the exp.cpp"));

}
