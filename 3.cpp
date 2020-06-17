#include<iostream>
using namespace std;

int Ackerman(int x,int y)
{
	if(x==0) return y+1;
	if(y==0) return Ackerman(x-1,1);
	return Ackerman(x-1,Ackerman(x,y-1));
}

int main()
{
	cout<<Ackerman(2,3)<<endl;
	cout<<Ackerman(2,5)<<endl;
	cout<<Ackerman(0,3)<<endl;
	cout<<Ackerman(3,0)<<endl;
}
