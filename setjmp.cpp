#include<iostream>
#include<setjmp.h>

using namespace std;

class C
{
public:
	C(int a)
	{
		m_na=a;
		cout<<"C构造函数！\t"<<m_na<<endl;
	}
	~C()
	{
		cout<<"C析构函数！\t"<<m_na<<endl;
	}

	int m_na;
};

jmp_buf jmpbuffer;

void M1(int i)
{
	C c(1);
	cout<<"M1"<<endl;
	if(i==1)
	{
		longjmp(jmpbuffer,1);
	}
}
void M2(int i)
{
	C c(2);
	M1(i);
	cout<<"M2"<<endl;
	if(i==2)
	{
		longjmp(jmpbuffer,2);
	}
}
int main(int argc,char *argv[])
{
	int ret;
	if((ret=setjmp(jmpbuffer))!=0)
	{
		cout<<"jmp "<<ret<<endl;
		return ret;
	}
	M2(argc-1);
	cout<<"Main"<<endl;
	return 0;
}
