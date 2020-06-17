#include<iostream>
#include<string>
using namespace std;
int is_palindrome(int a, int b, string s)
{
	int check = 0;
	if (a > b)
		return 0;
	check = check + is_palindrome(a + 1, b - 1, s);
	if (s[a] != s[b])
	{
		check++;
	}
	return check;
}
int main()
{
	string s;
	cout << "Input string: ";
	getline(cin,s);
	int a = 0;
	int b = s.length() - 1;
	if (is_palindrome(a, b, s) == 0)
	{
		cout << "Palindrome";
	}
	else cout << "Not palindrome";
}
