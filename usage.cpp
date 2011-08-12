#include<iostream>

using namespace std;

#define P(ch) Print(#ch,ch)
void Print(const char *ch,long n)
{
	cout<<ch<<"="<<n<<endl;
}
#define P2(ch) Print(#ch)
void Print(const char *ch)
{
	cout<<ch<<endl;
}
int main()
{
	int a=10;
	int bb=11;
	int ccc=12;
	P(a);
	P(bb);
	P(ccc);
	P(13);
	P2(dgdfgfd);
//	Print(#zxcvbnm);
//#define A #zxcvbnm
//	Print(A);
	return 0;
}
