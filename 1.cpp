#include<pwd.h>
#include<stddef.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	struct passwd *ptr;
	setpwent();
	while((ptr=getpwent())!=NULL)
	{
		cout<<ptr->pw_name<<endl;
	}
	endpwent();
	return 0;
}
