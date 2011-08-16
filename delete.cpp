#include<iostream>

using namespace std;

class Test
{
	public:
		Test()
		{
			cout<<"构造"<<endl;
		}
		~Test()
		{
			cout<<"析构..."<<endl;
		}
};

int main()
{
	Test *t=new Test[4];
	delete []t;
	return 0;
}
