#include<iostream>
#include<string>
using namespace std;

int Convert(string s,int index,int &mul)
{
	int cur;
	if(index==s.length())
	{
		mul=1;
		return 0;
	}
	cur=Convert(s,index+1,mul);
    cur=cur+(s[index]-'0')*mul;
    cout<<cur<<" ";
	mul=mul*10;
	return cur;	
}

int main()
{
	int mul=1;
	cout<<Convert("1234",0,mul)<<endl;
	cout<<Convert("2030",0,mul)<<endl;
}
