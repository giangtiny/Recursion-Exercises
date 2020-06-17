#include<iostream>
using namespace std;

int findmin(int a[],int n)
{
	if(n == 0)
        return a[0];
    
    else
    {
        if(a[n-1] < findmin(a,(n-1)))
            return a[n-1];
        else
            return findmin(a,(n-1));
    }
	cout<<a[n-1]<<" "<<findmin(a,n-1);
}
int findpos(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(findmin(a,n)==a[i]) return i;
	}
}
int main()
{
	int n; //the number of elements in the list
	t:
	cin>>n;
	if(n<=0) goto t;
	int s[n],pos;
	for(int i=n-1;i>=0;i--)
	{
		cout<<"Linked list ["<<i<<"] = ";
		cin>>s[i];
	}
	cout<<findpos(s,n);
}
