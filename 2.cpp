#include<iostream>
using namespace std;

int fun3(int x,int y)
{
	if(x>y) return -1;
	if(x==y) return 1;
	return x*fun3(x+1,y);
}

int main()
{
	cout<<fun3(10,4)<<endl;
	cout<<fun3(4,3)<<endl;
	cout<<fun3(4,7)<<endl;
	cout<<fun3(0,0)<<endl;
}
