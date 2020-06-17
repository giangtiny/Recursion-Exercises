#include<iostream>
#include<cstring>
using namespace std;

int Convert(char s[],int index,int mul)
{
	int cur=0;
	if(s[index]='\0')
	{
		return 0;
	}
	cur=cur+int((s[index]-'0'))*mul;
	return cur+Convert(s,index+1,mul/10);
	
}
void Read(char str[])
{
    for(int i=0;str[i]!='\0';i++)
	{
		cin>>str[i];
		if(str[i]==-1) str[i]='\0';
	}	
}

int main()
{
	char str[1000];
	Read(str);
	cout<<Convert(str,0,10*strlen(str))<<endl;
	cout<<Convert(str,0,10*strlen(str))<<endl;
}
