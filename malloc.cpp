#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	char *p1=(char *)malloc(10);
	if(p1==NULL) cout<<"malloc failed!"<<endl;
	cout<<*p1<<endl;
	free(p1);
	char *p2=(char *)calloc(10,1);
	if(p2==NULL) cout<<"calloc failed!"<<endl;
	cout<<*p2<<endl;
	free(p2);
	char *p3=(char *)malloc(10);
	if(p3==NULL) cout<<"p3 malloc failed!"<<endl;
	char *p4=(char *)realloc(p3,20);
	if(p4==NULL) cout<<"realloc failed!"<<endl;
	cout<<*p4<<endl;
	if(p3==p4) cout<<"equal"<<endl;
	printf("p3=%p p4=%p\n",p3,p4);
	//cout<<"p3="<<p3<<"p4="<<p4<<endl;
	//free(p3);
	cout<<"p3 free"<<endl;
	free(p4);
	return 0;
}
