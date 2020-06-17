#include <iostream> 
using namespace std; 

int prime(int n,int m) //check the number is prime or not
{ 
	int count=0;
	if(n<=0) return 0;
	if((m%n)==0) count++;
	return count+prime((n-1),m);
}

int countPrime(int a[],int n) //count the number of primes in an array
{
	int k=0;
	if(n<0) return 0;
	if(prime(a[n],a[n])==2) k++;
	return k+countPrime(a,n-1);
} 

int max(int a[], int n) //find the max value in an array
{
    if(n == 1) return a[0];
    int tempmax=max(a, n-1);
    if(tempmax > a[n-1]) return tempmax;
    return a[n-1];
}

int max2(int a[],int n,int m) //find the second-max value in an array
{
	if(n==1) return a[0];
	int tempmax2=max2(a,n-1,m);
	if(tempmax2>a[n-1] && tempmax2<max(a,m)) return tempmax2;
	else if(a[n-1]<max(a,m)) return a[n-1];
	return tempmax2;
}

int doixung(int a[],int m,int n) //
{
	int check=0;
	if(m>n) return 0;
	if(a[m]!=a[n]) check++;
	return check+doixung(a,m+1,n-1);
}

int strlen(int a[],int n) //find the length of an array
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		count++;	
	}
	return count-1;
}

void print(int a[],int n) //display an array on the screen
{
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
}
int main() 
{ 
	int n;
	cin>>n; //the number of elements in the array
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>a[i];
	}
	print(a,n);
	cout<<"The number of prime number in the array: "<<countPrime(a,n-1)<<endl;
	cout<<"The second-max value in the array: "<<max2(a,n,n)<<endl;
	if(doixung(a,0,strlen(a,n))==0) cout<<"Mang doi xung.";
	else cout<<"Mang khong doi xung.";
} 
