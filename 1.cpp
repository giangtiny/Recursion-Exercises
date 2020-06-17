#include<iostream>
using namespace std;

int fun1(int x)
{
	if(x<5) return x*3;
	return 2 * fun1(x-5) + 7;
}

int main()
{
	int a=4,b=10,c=12;
	cout<<fun1(a)<<endl;
	cout<<fun1(b)<<endl;
	cout<<fun1(c)<<endl;
}
