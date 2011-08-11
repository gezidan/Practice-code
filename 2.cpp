#include<unistd.h>
#include<sys/utsname.h>
#include<iostream>
using namespace std;

int main()
{
	utsname name;
	uname(&name);
	cout<<"sysname:"<<name.sysname<<" nodename:"<<name.nodename<<" release:"<<name.release<<" version:"<<name.version<<" machine:"<<name.machine<<endl;

	const int HOST_NAME_MAX=1024;
	char hostname[HOST_NAME_MAX];
	if(gethostname(hostname,HOST_NAME_MAX)==-1)
	{
		cout<<"error!"<<endl;
	}
	cout<<"hostname:"<<hostname<<endl;

	return 0;
}
